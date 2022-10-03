#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TriangleNet::Tools::QualityMeasure_AlphaMeasure {
    IL2CPP_REGISTER_METHOD(0x02A99970, void, Reset, (app::QualityMeasure_AlphaMeasure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A999A0, double, acos, (app::QualityMeasure_AlphaMeasure * this_ptr, double c))
    IL2CPP_REGISTER_METHOD(0x02A99A80, double, Measure, (app::QualityMeasure_AlphaMeasure * this_ptr, double ab, double bc, double ca, double area))
    IL2CPP_REGISTER_METHOD(0x02A99D40, void, Normalize, (app::QualityMeasure_AlphaMeasure * this_ptr, int32_t n, double area_total))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::QualityMeasure_AlphaMeasure * this_ptr))
} // namespace app::classes::TriangleNet::Tools::QualityMeasure_AlphaMeasure
