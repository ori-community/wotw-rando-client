#pragma once
#include <Modloader/app/structs/XmlSchemaGroupBase.h>
#include <Modloader/app/structs/XmlSchemaGroupBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaGroupBase {
        inline app::XmlSchemaGroupBase__Class** type_info() {
            static app::XmlSchemaGroupBase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaGroupBase__Class**)(modloader::win::memory::resolve_rva(0x0473CF00));
            }
            return cache;
        }
        inline app::XmlSchemaGroupBase__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaGroupBase__Class>(type_info(), "System.Xml.Schema", "XmlSchemaGroupBase");
        }
        inline app::XmlSchemaGroupBase* create() {
            return il2cpp::create_object<app::XmlSchemaGroupBase>(get_class());
        }
    } // namespace XmlSchemaGroupBase
} // namespace app::classes::types
