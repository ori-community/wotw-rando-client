#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HideInInspector {
        namespace {
            inline app::HideInInspector__Class* type_info_ref = nullptr;
        }
        inline app::HideInInspector__Class** type_info = &type_info_ref;
        inline app::HideInInspector__Class* get_class() {
            return il2cpp::get_class<app::HideInInspector__Class>(type_info, "UnityEngine", "HideInInspector");
        }
        inline app::HideInInspector* create() {
            return il2cpp::create_object<app::HideInInspector>(get_class());
        }
    } // namespace HideInInspector
} // namespace app::classes::types
