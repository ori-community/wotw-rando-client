#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IWebRequestCreate.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/WebRequestPrefixElement.h>

namespace app::classes::System::Net::WebRequestPrefixElement {
    IL2CPP_REGISTER_METHOD(0x021B8380, app::IWebRequestCreate*, get_Creator, app::WebRequestPrefixElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Creator, app::WebRequestPrefixElement* this_ptr, app::IWebRequestCreate* value)
    IL2CPP_REGISTER_METHOD(0x021B8580, void, ctor_1, app::WebRequestPrefixElement* this_ptr, app::String* P, app::Type* creator_type)
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_2, app::WebRequestPrefixElement* this_ptr, app::String* P, app::IWebRequestCreate* C)
} // namespace app::classes::System::Net::WebRequestPrefixElement
