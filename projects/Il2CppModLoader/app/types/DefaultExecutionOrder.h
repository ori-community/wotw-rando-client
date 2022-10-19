#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultExecutionOrder {
        namespace {
            inline app::DefaultExecutionOrder__Class* type_info_ref = nullptr;
        }
        inline app::DefaultExecutionOrder__Class** type_info = &type_info_ref;
        inline app::DefaultExecutionOrder__Class* get_class() {
            return il2cpp::get_class<app::DefaultExecutionOrder__Class>(type_info, "UnityEngine", "DefaultExecutionOrder");
        }
        inline app::DefaultExecutionOrder* create() {
            return il2cpp::create_object<app::DefaultExecutionOrder>(get_class());
        }
    } // namespace DefaultExecutionOrder
} // namespace app::classes::types
