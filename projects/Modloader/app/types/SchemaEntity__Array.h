#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SchemaEntity__Array {
        namespace {
            inline app::SchemaEntity__Array__Class* type_info_ref = nullptr;
        }
        inline app::SchemaEntity__Array__Class** type_info = &type_info_ref;
        inline app::SchemaEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::SchemaEntity__Array__Class>(type_info, "System.Xml.Schema", "SchemaEntity[]");
        }
        inline app::SchemaEntity__Array* create() {
            return il2cpp::create_object<app::SchemaEntity__Array>(get_class());
        }
    } // namespace SchemaEntity__Array
} // namespace app::classes::types
