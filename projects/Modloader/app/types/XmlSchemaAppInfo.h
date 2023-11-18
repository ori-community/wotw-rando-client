#pragma once
#include <Modloader/app/structs/XmlSchemaAppInfo.h>
#include <Modloader/app/structs/XmlSchemaAppInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaAppInfo {
        inline app::XmlSchemaAppInfo__Class** type_info() {
            static app::XmlSchemaAppInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaAppInfo__Class**)(modloader::win::memory::resolve_rva(0x04753228));
            }
            return cache;
        }
        inline app::XmlSchemaAppInfo__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAppInfo__Class>(type_info(), "System.Xml.Schema", "XmlSchemaAppInfo");
        }
        inline app::XmlSchemaAppInfo* create() {
            return il2cpp::create_object<app::XmlSchemaAppInfo>(get_class());
        }
    } // namespace XmlSchemaAppInfo
} // namespace app::classes::types
