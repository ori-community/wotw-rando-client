#pragma once
#include <Modloader/app/structs/XmlName.h>
#include <Modloader/app/structs/XmlName__Array.h>
#include <Modloader/app/structs/XmlName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlName {
        inline app::XmlName__Class** type_info() {
            static app::XmlName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlName__Class**)(modloader::win::memory::resolve_rva(0x04744EA8));
            }
            return cache;
        }
        inline app::XmlName__Class* get_class() {
            return il2cpp::get_class<app::XmlName__Class>(type_info(), "System.Xml", "XmlName");
        }
        inline app::XmlName* create() {
            return il2cpp::create_object<app::XmlName>(get_class());
        }
        inline app::XmlName__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlName__Array>(get_class(), size);
        }
        inline app::XmlName__Array* create_array(const std::vector<app::XmlName*>& items) {
            return il2cpp::array_new<app::XmlName__Array>(get_class(), items);
        }
    } // namespace XmlName
} // namespace app::classes::types
