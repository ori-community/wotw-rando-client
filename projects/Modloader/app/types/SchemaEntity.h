#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SchemaEntity {
        inline app::SchemaEntity__Class** type_info = (app::SchemaEntity__Class**)(modloader::win::memory::resolve_rva(0x0478C1C0));
        inline app::SchemaEntity__Class* get_class() {
            return il2cpp::get_class<app::SchemaEntity__Class>(type_info, "System.Xml.Schema", "SchemaEntity");
        }
        inline app::SchemaEntity* create() {
            return il2cpp::create_object<app::SchemaEntity>(get_class());
        }
        inline app::SchemaEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::SchemaEntity__Array>(get_class(), size);
        }
        inline app::SchemaEntity__Array* create_array(const std::vector<app::SchemaEntity*>& items) {
            return il2cpp::array_new<app::SchemaEntity__Array>(get_class(), items);
        }
    } // namespace SchemaEntity
} // namespace app::classes::types
