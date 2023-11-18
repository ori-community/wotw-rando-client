#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_ColorVariationManager_IColorVariationInfluencer_.h>
#include <Modloader/app/structs/ColorVariationManager_IColorVariationInfluencer.h>

namespace app::classes::System::Collections::Generic::List_1_ColorVariationManager_IColorVariationInfluencer_ {
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_ColorVariationManager_IColorVariationInfluencer_ * this_ptr, app::ColorVariationManager_IColorVariationInfluencer* item))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_ColorVariationManager_IColorVariationInfluencer_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::ColorVariationManager_IColorVariationInfluencer*, get_Item, (app::List_1_ColorVariationManager_IColorVariationInfluencer_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_ColorVariationManager_IColorVariationInfluencer_ * this_ptr, int32_t index, app::ColorVariationManager_IColorVariationInfluencer* item))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_ColorVariationManager_IColorVariationInfluencer_ * this_ptr, app::ColorVariationManager_IColorVariationInfluencer* item))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_ColorVariationManager_IColorVariationInfluencer_ * this_ptr, app::ColorVariationManager_IColorVariationInfluencer* item))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_ColorVariationManager_IColorVariationInfluencer_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_ColorVariationManager_IColorVariationInfluencer_
