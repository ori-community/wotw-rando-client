#pragma once
#include <Modloader/app/structs/SchemaElementDecl.h>
#include <Modloader/app/structs/SchemaElementDecl__Array.h>
#include <Modloader/app/structs/SchemaElementDecl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaElementDecl {
        inline app::SchemaElementDecl__Class** type_info() {
            static app::SchemaElementDecl__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SchemaElementDecl__Class**)(modloader::win::memory::resolve_rva(0x0472B2B0));
            }
            return cache;
        }
        inline app::SchemaElementDecl__Class* get_class() {
            return il2cpp::get_class<app::SchemaElementDecl__Class>(type_info(), "System.Xml.Schema", "SchemaElementDecl");
        }
        inline app::SchemaElementDecl* create() {
            return il2cpp::create_object<app::SchemaElementDecl>(get_class());
        }
        inline app::SchemaElementDecl__Array* create_array(int size) {
            return il2cpp::array_new<app::SchemaElementDecl__Array>(get_class(), size);
        }
        inline app::SchemaElementDecl__Array* create_array(const std::vector<app::SchemaElementDecl*>& items) {
            return il2cpp::array_new<app::SchemaElementDecl__Array>(get_class(), items);
        }
    } // namespace SchemaElementDecl
} // namespace app::classes::types
