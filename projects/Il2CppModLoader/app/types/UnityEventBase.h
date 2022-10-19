#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityEventBase {
        namespace {
            inline app::UnityEventBase__Class* type_info_ref = nullptr;
        }
        inline app::UnityEventBase__Class** type_info = &type_info_ref;
        inline app::UnityEventBase__Class* get_class() {
            return il2cpp::get_class<app::UnityEventBase__Class>(type_info, "UnityEngine.Events", "UnityEventBase");
        }
        inline app::UnityEventBase* create() {
            return il2cpp::create_object<app::UnityEventBase>(get_class());
        }
    } // namespace UnityEventBase
} // namespace app::classes::types
