#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TriangleNet::Tools::QualityMeasure_Q_Measure {
    IL2CPP_REGISTER_METHOD(0x02A99970, void, Reset, (app::QualityMeasure_Q_Measure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A99FB0, double, Measure, (app::QualityMeasure_Q_Measure * this_ptr, double ab, double bc, double ca, double area))
    IL2CPP_REGISTER_METHOD(0x02A99D40, void, Normalize, (app::QualityMeasure_Q_Measure * this_ptr, int32_t n, double area_total))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::QualityMeasure_Q_Measure * this_ptr))
} // namespace app::classes::TriangleNet::Tools::QualityMeasure_Q_Measure
