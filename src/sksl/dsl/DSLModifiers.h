/*
 * Copyright 2020 Google LLC
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef SKSL_DSL_MODIFIERS
#define SKSL_DSL_MODIFIERS

#include "src/sksl/ir/SkSLModifiers.h"
namespace SkSL {

namespace dsl {

enum Modifier {
    kNo_Modifier            =       0,
    kConst_Modifier         = 1 <<  0,
    kIn_Modifier            = 1 <<  1,
    kOut_Modifier           = 1 <<  2,
    kInOut_Modifier         = kIn_Modifier | kOut_Modifier,
    kUniform_Modifier       = 1 <<  3,
    kFlat_Modifier          = 1 <<  4,
    kNoPerspective_Modifier = 1 <<  5,
};

class DSLModifiers {
public:

    DSLModifiers() {}

    DSLModifiers(int flags)
        : fModifiers(SkSL::Layout(), flags) {}

private:
    SkSL::Modifiers fModifiers;

    friend class DSLVar;
};

} // namespace dsl

} // namespace SkSL

#endif
