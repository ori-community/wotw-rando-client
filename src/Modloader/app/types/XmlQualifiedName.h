#pragma once
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlQualifiedName__Array.h>
#include <Modloader/app/structs/XmlQualifiedName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlQualifiedName {
        inline app::XmlQualifiedName__Class** type_info() {
            static app::XmlQualifiedName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlQualifiedName__Class**)(modloader::win::memory::resolve_rva(0x047858F0));
            }
            return cache;
        }
        inline app::XmlQualifiedName__Class* get_class() {
            return il2cpp::get_class<app::XmlQualifiedName__Class>(type_info(), "System.Xml", "XmlQualifiedName");
        }
        inline app::XmlQualifiedName* create() {
            return il2cpp::create_object<app::XmlQualifiedName>(get_class());
        }
        inline app::XmlQualifiedName__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlQualifiedName__Array>(get_class(), size);
        }
        inline app::XmlQualifiedName__Array* create_array(const std::vector<app::XmlQualifiedName*>& items) {
            return il2cpp::array_new<app::XmlQualifiedName__Array>(get_class(), items);
        }
    } // namespace XmlQualifiedName
} // namespace app::classes::types
