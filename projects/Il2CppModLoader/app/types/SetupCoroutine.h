#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetupCoroutine {
        namespace {
            inline app::SetupCoroutine__Class* type_info_ref = nullptr;
        }
        inline app::SetupCoroutine__Class** type_info = &type_info_ref;
        inline app::SetupCoroutine__Class* get_class() {
            return il2cpp::get_class<app::SetupCoroutine__Class>(type_info, "UnityEngine", "SetupCoroutine");
        }
        inline app::SetupCoroutine* create() {
            return il2cpp::create_object<app::SetupCoroutine>(get_class());
        }
    } // namespace SetupCoroutine
} // namespace app::classes::types
