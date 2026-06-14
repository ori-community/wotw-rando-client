#pragma once
#include <Modloader/app/structs/XmlSerializer.h>
#include <Modloader/app/structs/XmlSerializer__Array.h>
#include <Modloader/app/structs/XmlSerializer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializer {
        inline app::XmlSerializer__Class** type_info() {
            static app::XmlSerializer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSerializer__Class**)(modloader::win::memory::resolve_rva(0x0470CFD0));
            }
            return cache;
        }
        inline app::XmlSerializer__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializer__Class>(type_info(), "System.Xml.Serialization", "XmlSerializer");
        }
        inline app::XmlSerializer* create() {
            return il2cpp::create_object<app::XmlSerializer>(get_class());
        }
        inline app::XmlSerializer__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlSerializer__Array>(get_class(), size);
        }
        inline app::XmlSerializer__Array* create_array(const std::vector<app::XmlSerializer*>& items) {
            return il2cpp::array_new<app::XmlSerializer__Array>(get_class(), items);
        }
    } // namespace XmlSerializer
} // namespace app::classes::types
