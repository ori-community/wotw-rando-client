#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SchemaElementDecl__Array {
        namespace {
            inline app::SchemaElementDecl__Array__Class* type_info_ref = nullptr;
        }
        inline app::SchemaElementDecl__Array__Class** type_info = &type_info_ref;
        inline app::SchemaElementDecl__Array__Class* get_class() {
            return il2cpp::get_class<app::SchemaElementDecl__Array__Class>(type_info, "System.Xml.Schema", "SchemaElementDecl[]");
        }
        inline app::SchemaElementDecl__Array* create() {
            return il2cpp::create_object<app::SchemaElementDecl__Array>(get_class());
        }
    } // namespace SchemaElementDecl__Array
} // namespace app::classes::types
