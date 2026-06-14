#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonExtensionDataAttribute.h>

namespace app::classes::Newtonsoft::Json::JsonExtensionDataAttribute {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_WriteData, app::JsonExtensionDataAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_ReadData, app::JsonExtensionDataAttribute* this_ptr)
} // namespace app::classes::Newtonsoft::Json::JsonExtensionDataAttribute
