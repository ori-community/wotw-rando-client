#pragma once
#include <Modloader/app/structs/SchemaAttDef.h>
#include <Modloader/app/structs/SchemaAttDef__Array.h>
#include <Modloader/app/structs/SchemaAttDef__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaAttDef {
        inline app::SchemaAttDef__Class** type_info() {
            static app::SchemaAttDef__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SchemaAttDef__Class**)(modloader::win::memory::resolve_rva(0x04753D00));
            }
            return cache;
        }
        inline app::SchemaAttDef__Class* get_class() {
            return il2cpp::get_class<app::SchemaAttDef__Class>(type_info(), "System.Xml.Schema", "SchemaAttDef");
        }
        inline app::SchemaAttDef* create() {
            return il2cpp::create_object<app::SchemaAttDef>(get_class());
        }
        inline app::SchemaAttDef__Array* create_array(int size) {
            return il2cpp::array_new<app::SchemaAttDef__Array>(get_class(), size);
        }
        inline app::SchemaAttDef__Array* create_array(const std::vector<app::SchemaAttDef*>& items) {
            return il2cpp::array_new<app::SchemaAttDef__Array>(get_class(), items);
        }
    } // namespace SchemaAttDef
} // namespace app::classes::types
