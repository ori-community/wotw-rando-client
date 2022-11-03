#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Atlas__Array {
        namespace {
            inline app::Atlas__Array__Class* type_info_ref = nullptr;
        }
        inline app::Atlas__Array__Class** type_info = &type_info_ref;
        inline app::Atlas__Array__Class* get_class() {
            return il2cpp::get_class<app::Atlas__Array__Class>(type_info, "", "Atlas[]");
        }
        inline app::Atlas__Array* create() {
            return il2cpp::create_object<app::Atlas__Array>(get_class());
        }
    } // namespace Atlas__Array
} // namespace app::classes::types
