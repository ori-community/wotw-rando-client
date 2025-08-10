#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonConverterAttribute.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::JsonConverterAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_ConverterType, app::JsonConverterAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object__Array*, get_ConverterParameters, app::JsonConverterAttribute* this_ptr)
} // namespace app::classes::Newtonsoft::Json::JsonConverterAttribute
