#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::RobustPredicates {
    IL2CPP_REGISTER_METHOD(0x02B277F0, app::RobustPredicates*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02B27AE0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02B27D90, void, ctor, (app::RobustPredicates * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B27DA0, double, CounterClockwise, (app::RobustPredicates * this_ptr, app::Point* pa, app::Point* pb, app::Point* pc))
    IL2CPP_REGISTER_METHOD(0x02B28000, double, InCircle, (app::RobustPredicates * this_ptr, app::Point* pa, app::Point* pb, app::Point* pc, app::Point* pd))
    IL2CPP_REGISTER_METHOD(0x02B28390, double, NonRegular, (app::RobustPredicates * this_ptr, app::Point* pa, app::Point* pb, app::Point* pc, app::Point* pd))
    IL2CPP_REGISTER_METHOD(0x02B283A0, app::Point*, FindCircumcenter_1, (app::RobustPredicates * this_ptr, app::Point* org, app::Point* dest, app::Point* apex, double* xi, double* eta, double offconstant))
    IL2CPP_REGISTER_METHOD(0x02B28910, app::Point*, FindCircumcenter_2, (app::RobustPredicates * this_ptr, app::Point* org, app::Point* dest, app::Point* apex, double* xi, double* eta))
    IL2CPP_REGISTER_METHOD(0x02B28CA0, int32_t, FastExpansionSumZeroElim, (app::RobustPredicates * this_ptr, int32_t elen, app::Double__Array* e, int32_t flen, app::Double__Array* f, app::Double__Array* h))
    IL2CPP_REGISTER_METHOD(0x02B29190, int32_t, ScaleExpansionZeroElim, (app::RobustPredicates * this_ptr, int32_t elen, app::Double__Array* e, double b, app::Double__Array* h))
    IL2CPP_REGISTER_METHOD(0x02B29560, double, Estimate, (app::RobustPredicates * this_ptr, int32_t elen, app::Double__Array* e))
    IL2CPP_REGISTER_METHOD(0x02B295D0, double, CounterClockwiseAdapt, (app::RobustPredicates * this_ptr, app::Point* pa, app::Point* pb, app::Point* pc, double detsum))
    IL2CPP_REGISTER_METHOD(0x02B2A250, double, InCircleAdapt, (app::RobustPredicates * this_ptr, app::Point* pa, app::Point* pb, app::Point* pc, app::Point* pd, double permanent))
    IL2CPP_REGISTER_METHOD(0x02B30FD0, void, AllocateWorkspace, (app::RobustPredicates * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ClearWorkspace, (app::RobustPredicates * this_ptr))
} // namespace app::classes::TriangleNet::RobustPredicates
