#pragma once
#include <Modloader/app/structs/XmlSchemaCompilationSettings.h>
#include <Modloader/app/structs/XmlSchemaCompilationSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaCompilationSettings {
        inline app::XmlSchemaCompilationSettings__Class** type_info() {
            static app::XmlSchemaCompilationSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaCompilationSettings__Class**)(modloader::win::memory::resolve_rva(0x0476B820));
            }
            return cache;
        }
        inline app::XmlSchemaCompilationSettings__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaCompilationSettings__Class>(type_info(), "System.Xml.Schema", "XmlSchemaCompilationSettings");
        }
        inline app::XmlSchemaCompilationSettings* create() {
            return il2cpp::create_object<app::XmlSchemaCompilationSettings>(get_class());
        }
    } // namespace XmlSchemaCompilationSettings
} // namespace app::classes::types
