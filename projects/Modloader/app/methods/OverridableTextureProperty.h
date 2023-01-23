#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OverridableTextureProperty.h>

namespace app::classes::OverridableTextureProperty {
    IL2CPP_REGISTER_METHOD(0x00443210, int32_t, get_ID, (app::OverridableTextureProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443390, void, ctor_1, (app::OverridableTextureProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443450, void, ctor_2, (app::OverridableTextureProperty * this_ptr, app::OverridableTextureProperty* texture_property))
    IL2CPP_REGISTER_METHOD(0x00443560, void, Apply, (app::OverridableTextureProperty * this_ptr, app::OverridableTextureProperty* texture_property))
} // namespace app::classes::OverridableTextureProperty
