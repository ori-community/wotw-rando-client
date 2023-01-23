#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_PointLightMaskModifier_.h>
#include <Modloader/app/structs/PointLightMaskModifier.h>
#include <Modloader/app/structs/IComparer_1_PointLightMaskModifier_.h>

namespace app::classes::System::Collections::Generic::List_1_PointLightMaskModifier_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_PointLightMaskModifier_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047495D0, List_1_PointLightMaskModifier___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::PointLightMaskModifier*, get_Item, (app::List_1_PointLightMaskModifier_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04725E88, List_1_PointLightMaskModifier__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_PointLightMaskModifier_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04775C50, List_1_PointLightMaskModifier__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_PointLightMaskModifier_ * this_ptr, int32_t index, app::PointLightMaskModifier* item))
    IL2CPP_REGISTER_METHODINFO(0x04787948, List_1_PointLightMaskModifier__Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_PointLightMaskModifier_ * this_ptr, app::PointLightMaskModifier* item))
    IL2CPP_REGISTER_METHODINFO(0x0470F428, List_1_PointLightMaskModifier__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_PointLightMaskModifier_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04735CA0, List_1_PointLightMaskModifier__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort, (app::List_1_PointLightMaskModifier_ * this_ptr, int32_t index, int32_t count, app::IComparer_1_PointLightMaskModifier_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0474BAB0, List_1_PointLightMaskModifier__Sort__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_PointLightMaskModifier_
