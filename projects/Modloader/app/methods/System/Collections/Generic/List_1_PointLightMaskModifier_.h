#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_PointLightMaskModifier_.h>
#include <Modloader/app/structs/IComparer_1_PointLightMaskModifier_.h>
#include <Modloader/app/structs/PointLightMaskModifier.h>

namespace app::classes::System::Collections::Generic::List_1_PointLightMaskModifier_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_PointLightMaskModifier_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::PointLightMaskModifier*, get_Item, (app::List_1_PointLightMaskModifier_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_PointLightMaskModifier_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_PointLightMaskModifier_ * this_ptr, int32_t index, app::PointLightMaskModifier* item))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_PointLightMaskModifier_ * this_ptr, app::PointLightMaskModifier* item))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_PointLightMaskModifier_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort, (app::List_1_PointLightMaskModifier_ * this_ptr, int32_t index, int32_t count, app::IComparer_1_PointLightMaskModifier_* comparer))
} // namespace app::classes::System::Collections::Generic::List_1_PointLightMaskModifier_
