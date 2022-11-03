#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Toggle__Array {
        namespace {
            inline app::Toggle__Array__Class* type_info_ref = nullptr;
        }
        inline app::Toggle__Array__Class** type_info = &type_info_ref;
        inline app::Toggle__Array__Class* get_class() {
            return il2cpp::get_class<app::Toggle__Array__Class>(type_info, "UnityEngine.UI", "Toggle[]");
        }
        inline app::Toggle__Array* create() {
            return il2cpp::create_object<app::Toggle__Array>(get_class());
        }
    } // namespace Toggle__Array
} // namespace app::classes::types
