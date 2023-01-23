#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlSerializerFactory.h>
#include <Modloader/app/structs/XmlSerializer.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlRootAttribute.h>
#include <Modloader/app/structs/XmlAttributeOverrides.h>
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::Serialization::XmlSerializerFactory {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlSerializerFactory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0194BAD0, app::XmlSerializer*, CreateSerializer_1, (app::XmlSerializerFactory * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x0194BB00, app::XmlSerializer*, CreateSerializer_2, (app::XmlSerializerFactory * this_ptr, app::Type* type, app::XmlRootAttribute* root))
    IL2CPP_REGISTER_METHOD(0x0194BB30, app::XmlSerializer*, CreateSerializer_3, (app::XmlSerializerFactory * this_ptr, app::Type* type, app::XmlAttributeOverrides* overrides, app::Type__Array* extra_types, app::XmlRootAttribute* root, app::String* default_namespace))
    IL2CPP_REGISTER_METHOD(0x0194BFC0, void, cctor, ())
} // namespace app::classes::System::Xml::Serialization::XmlSerializerFactory
