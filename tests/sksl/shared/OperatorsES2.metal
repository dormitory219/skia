#include <metal_stdlib>
#include <simd/simd.h>
using namespace metal;
struct Uniforms {
    float4 colorGreen;
    float4 colorRed;
};
struct Inputs {
};
struct Outputs {
    float4 sk_FragColor [[color(0)]];
};


fragment Outputs fragmentMain(Inputs _in [[stage_in]], constant Uniforms& _uniforms [[buffer(0)]], bool _frontFacing [[front_facing]], float4 _fragCoord [[position]]) {
    Outputs _out;
    (void)_out;
    float x = 1.0;
    float y = 2.0;

    int z = 3;
    x = 2.0;
    y = 0.5;
    z = 5;
    bool c = sqrt(2.0) > 2.0;
    bool d = true != c;
    bool e = c;
    x += 12.0;
    x -= 12.0;
    x *= (y /= 10.0);
    x = float((float2(sqrt(1.0)) , 6));
    y = ((float(c) * float(d)) * float(e) , 6.0);
    z = int((float2(sqrt(1.0)) , 6));
    _out.sk_FragColor = (x == 6.0 && y == 6.0) && z == 6 ? _uniforms.colorGreen : _uniforms.colorRed;
    return _out;
}
