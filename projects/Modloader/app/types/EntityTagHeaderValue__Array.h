#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityTagHeaderValue__Array {
        namespace {
            inline app::EntityTagHeaderValue__Array__Class* type_info_ref = nullptr;
        }
        inline app::EntityTagHeaderValue__Array__Class** type_info = &type_info_ref;
        inline app::EntityTagHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityTagHeaderValue__Array__Class>(type_info, "System.Net.Http.Headers", "EntityTagHeaderValue[]");
        }
        inline app::EntityTagHeaderValue__Array* create() {
            return il2cpp::create_object<app::EntityTagHeaderValue__Array>(get_class());
        }
    } // namespace EntityTagHeaderValue__Array
} // namespace app::classes::types
