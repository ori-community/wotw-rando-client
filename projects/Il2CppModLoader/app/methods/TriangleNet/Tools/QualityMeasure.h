#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TriangleNet::Tools::QualityMeasure {
    IL2CPP_REGISTER_METHOD(0x02A98DC0, void, ctor, (app::QualityMeasure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A99090, double, get_AreaMinimum, (app::QualityMeasure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A990B0, double, get_AreaMaximum, (app::QualityMeasure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A990D0, double, get_AreaRatio, (app::QualityMeasure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A99100, double, get_AlphaMinimum, (app::QualityMeasure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A99120, double, get_AlphaMaximum, (app::QualityMeasure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A99140, double, get_AlphaAverage, (app::QualityMeasure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A99160, double, get_AlphaArea, (app::QualityMeasure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A99180, double, get_Q_Minimum, (app::QualityMeasure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A991A0, double, get_Q_Maximum, (app::QualityMeasure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A991C0, double, get_Q_Average, (app::QualityMeasure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A991E0, double, get_Q_Area, (app::QualityMeasure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A99200, void, Update, (app::QualityMeasure * this_ptr, app::Mesh_1 * mesh))
    IL2CPP_REGISTER_METHOD(0x02A99290, void, Compute, (app::QualityMeasure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A99710, int32_t, Bandwidth, (app::QualityMeasure * this_ptr))
}
