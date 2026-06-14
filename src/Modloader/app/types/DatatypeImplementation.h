#pragma once
#include <Modloader/app/structs/DatatypeImplementation.h>
#include <Modloader/app/structs/DatatypeImplementation__Array.h>
#include <Modloader/app/structs/DatatypeImplementation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DatatypeImplementation {
        inline app::DatatypeImplementation__Class** type_info() {
            static app::DatatypeImplementation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DatatypeImplementation__Class**)(modloader::win::memory::resolve_rva(0x04754068));
            }
            return cache;
        }
        inline app::DatatypeImplementation__Class* get_class() {
            return il2cpp::get_class<app::DatatypeImplementation__Class>(type_info(), "System.Xml.Schema", "DatatypeImplementation");
        }
        inline app::DatatypeImplementation* create() {
            return il2cpp::create_object<app::DatatypeImplementation>(get_class());
        }
        inline app::DatatypeImplementation__Array* create_array(int size) {
            return il2cpp::array_new<app::DatatypeImplementation__Array>(get_class(), size);
        }
        inline app::DatatypeImplementation__Array* create_array(const std::vector<app::DatatypeImplementation*>& items) {
            return il2cpp::array_new<app::DatatypeImplementation__Array>(get_class(), items);
        }
    } // namespace DatatypeImplementation
} // namespace app::classes::types
