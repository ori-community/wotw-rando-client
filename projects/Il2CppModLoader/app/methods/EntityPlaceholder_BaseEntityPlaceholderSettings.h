#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EntityPlaceholder_BaseEntityPlaceholderSettings {
    IL2CPP_REGISTER_METHOD(0x00C9DB10, void, CopyTo, (app::EntityPlaceholder_BaseEntityPlaceholderSettings * this_ptr, app::EntityPlaceholder_BaseEntityPlaceholderSettings * copy_target))
    IL2CPP_REGISTER_METHOD(0x00C9DB60, bool, Equals, (app::EntityPlaceholder_BaseEntityPlaceholderSettings * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x00C9DD20, int32_t, GetHashCode, (app::EntityPlaceholder_BaseEntityPlaceholderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C9DD80, void, ctor, (app::EntityPlaceholder_BaseEntityPlaceholderSettings * this_ptr))
}
