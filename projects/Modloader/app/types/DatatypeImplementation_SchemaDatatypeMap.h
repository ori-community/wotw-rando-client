#pragma once
#include <Modloader/app/structs/DatatypeImplementation_SchemaDatatypeMap.h>
#include <Modloader/app/structs/DatatypeImplementation_SchemaDatatypeMap__Array.h>
#include <Modloader/app/structs/DatatypeImplementation_SchemaDatatypeMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DatatypeImplementation_SchemaDatatypeMap {
        inline app::DatatypeImplementation_SchemaDatatypeMap__Class** type_info() {
            static app::DatatypeImplementation_SchemaDatatypeMap__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DatatypeImplementation_SchemaDatatypeMap__Class**)(modloader::win::memory::resolve_rva(0x04784930));
            }
            return cache;
        }
        inline app::DatatypeImplementation_SchemaDatatypeMap__Class* get_class() {
            return il2cpp::get_nested_class<app::DatatypeImplementation_SchemaDatatypeMap__Class>(type_info(), "System.Xml.Schema", "DatatypeImplementation", "SchemaDatatypeMap");
        }
        inline app::DatatypeImplementation_SchemaDatatypeMap* create() {
            return il2cpp::create_object<app::DatatypeImplementation_SchemaDatatypeMap>(get_class());
        }
        inline app::DatatypeImplementation_SchemaDatatypeMap__Array* create_array(int size) {
            return il2cpp::array_new<app::DatatypeImplementation_SchemaDatatypeMap__Array>(get_class(), size);
        }
        inline app::DatatypeImplementation_SchemaDatatypeMap__Array* create_array(const std::vector<app::DatatypeImplementation_SchemaDatatypeMap*>& items) {
            return il2cpp::array_new<app::DatatypeImplementation_SchemaDatatypeMap__Array>(get_class(), items);
        }
    } // namespace DatatypeImplementation_SchemaDatatypeMap
} // namespace app::classes::types
