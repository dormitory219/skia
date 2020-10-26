/*#pragma settings NoInline*/

/**************************************************************************************************
 *** This file was autogenerated from GrNestedCall.fp; do not modify.
 **************************************************************************************************/
#include "GrNestedCall.h"

#include "src/core/SkUtils.h"
#include "src/gpu/GrTexture.h"
#include "src/gpu/glsl/GrGLSLFragmentProcessor.h"
#include "src/gpu/glsl/GrGLSLFragmentShaderBuilder.h"
#include "src/gpu/glsl/GrGLSLProgramBuilder.h"
#include "src/sksl/SkSLCPP.h"
#include "src/sksl/SkSLUtil.h"
class GrGLSLNestedCall : public GrGLSLFragmentProcessor {
public:
    GrGLSLNestedCall() {}
    void emitCode(EmitArgs& args) override {
        GrGLSLFPFragmentBuilder* fragBuilder = args.fFragBuilder;
        const GrNestedCall& _outer = args.fFp.cast<GrNestedCall>();
        (void) _outer;
        SkString func1_name = fragBuilder->getMangledFunctionName("func1");
        const GrShaderVar func1_args[] = { };
        const String func1_impl = String::printf(R"SkSL(return %s();
)SkSL"
, func2_name.c_str());
        fragBuilder->emitFunction(kHalf4_GrSLType, func1_name.c_str(), 0, func1_args, func1_impl.c_str());
        SkString func2_name = fragBuilder->getMangledFunctionName("func2");
        const GrShaderVar func2_args[] = { };
        const String func2_impl = String::printf(R"SkSL(return %s();
)SkSL"
, func3_name.c_str());
        fragBuilder->emitFunction(kHalf4_GrSLType, func2_name.c_str(), 0, func2_args, func2_impl.c_str());
        SkString func3_name = fragBuilder->getMangledFunctionName("func3");
        const GrShaderVar func3_args[] = { };
        fragBuilder->codeAppendf(
R"SkSL(%s = %s();
)SkSL"
, args.fOutputColor, func1_name.c_str());
    }
private:
    void onSetData(const GrGLSLProgramDataManager& pdman, const GrFragmentProcessor& _proc) override {
    }
};
GrGLSLFragmentProcessor* GrNestedCall::onCreateGLSLInstance() const {
    return new GrGLSLNestedCall();
}
void GrNestedCall::onGetGLSLProcessorKey(const GrShaderCaps& caps, GrProcessorKeyBuilder* b) const {
}
bool GrNestedCall::onIsEqual(const GrFragmentProcessor& other) const {
    const GrNestedCall& that = other.cast<GrNestedCall>();
    (void) that;
    return true;
}
bool GrNestedCall::usesExplicitReturn() const {
    return false;
}
GrNestedCall::GrNestedCall(const GrNestedCall& src)
: INHERITED(kGrNestedCall_ClassID, src.optimizationFlags()) {
        this->cloneAndRegisterAllChildProcessors(src);
}
std::unique_ptr<GrFragmentProcessor> GrNestedCall::clone() const {
    return std::make_unique<GrNestedCall>(*this);
}
#if GR_TEST_UTILS
SkString GrNestedCall::onDumpInfo() const {
    return SkString();
}
#endif
