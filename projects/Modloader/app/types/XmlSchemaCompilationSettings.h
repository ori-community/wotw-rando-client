#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSchemaCompilationSettings__Class.h>
#include <Modloader/app/structs/XmlSchemaCompilationSettings.h>

namespace app::classes::types {
    namespace XmlSchemaCompilationSettings {
        inline app::XmlSchemaCompilationSettings__Class** type_info = (app::XmlSchemaCompilationSettings__Class**)(modloader::win::memory::resolve_rva(0x0476B820));
        inline app::XmlSchemaCompilationSettings__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaCompilationSettings__Class>(type_info, "System.Xml.Schema", "XmlSchemaCompilationSettings");
        }
        inline app::XmlSchemaCompilationSettings* create() {
            return il2cpp::create_object<app::XmlSchemaCompilationSettings>(get_class());
        }
    } // namespace XmlSchemaCompilationSettings
} // namespace app::classes::types
