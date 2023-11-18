#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HeaderVariantInfo__Boxed.h>
#include <Modloader/app/structs/CookieVariant__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::HeaderVariantInfo {
    IL2CPP_REGISTER_METHOD(0x0011D2D0, void, ctor, (app::HeaderVariantInfo__Boxed * this_ptr, app::String* name, app::CookieVariant__Enum variant))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::String*, get_Name, (app::HeaderVariantInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010A860, app::CookieVariant__Enum, get_Variant, (app::HeaderVariantInfo__Boxed * this_ptr))
} // namespace app::classes::System::Net::HeaderVariantInfo
