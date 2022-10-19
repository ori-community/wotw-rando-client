#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RagdollUtility {
        namespace {
            inline app::RagdollUtility__Class* type_info_ref = nullptr;
        }
        inline app::RagdollUtility__Class** type_info = &type_info_ref;
        inline app::RagdollUtility__Class* get_class() {
            return il2cpp::get_class<app::RagdollUtility__Class>(type_info, "RootMotion.FinalIK", "RagdollUtility");
        }
        inline app::RagdollUtility* create() {
            return il2cpp::create_object<app::RagdollUtility>(get_class());
        }
    } // namespace RagdollUtility
} // namespace app::classes::types
