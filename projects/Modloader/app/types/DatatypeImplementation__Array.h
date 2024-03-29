#pragma once
#include <Modloader/app/structs/DatatypeImplementation__Array.h>
#include <Modloader/app/structs/DatatypeImplementation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DatatypeImplementation__Array {
        inline app::DatatypeImplementation__Array__Class** type_info() {
            static app::DatatypeImplementation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DatatypeImplementation__Array__Class**)(modloader::win::memory::resolve_rva(0x04707B70));
            }
            return cache;
        }
        inline app::DatatypeImplementation__Array__Class* get_class() {
            return il2cpp::get_class<app::DatatypeImplementation__Array__Class>(type_info(), "System.Xml.Schema", "DatatypeImplementation[]");
        }
        inline app::DatatypeImplementation__Array* create() {
            return il2cpp::create_object<app::DatatypeImplementation__Array>(get_class());
        }
    } // namespace DatatypeImplementation__Array
} // namespace app::classes::types
