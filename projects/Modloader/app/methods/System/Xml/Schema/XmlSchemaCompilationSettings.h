#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlSchemaCompilationSettings.h>

namespace app::classes::System::Xml::Schema::XmlSchemaCompilationSettings {
    IL2CPP_REGISTER_METHOD(0x00B80D80, void, ctor, app::XmlSchemaCompilationSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_EnableUpaCheck, app::XmlSchemaCompilationSettings* this_ptr)
} // namespace app::classes::System::Xml::Schema::XmlSchemaCompilationSettings
