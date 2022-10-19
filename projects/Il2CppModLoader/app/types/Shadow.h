#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Shadow {
        namespace {
            inline app::Shadow__Class* type_info_ref = nullptr;
        }
        inline app::Shadow__Class** type_info = &type_info_ref;
        inline app::Shadow__Class* get_class() {
            return il2cpp::get_class<app::Shadow__Class>(type_info, "UnityEngine.UI", "Shadow");
        }
        inline app::Shadow* create() {
            return il2cpp::create_object<app::Shadow>(get_class());
        }
    } // namespace Shadow
} // namespace app::classes::types
