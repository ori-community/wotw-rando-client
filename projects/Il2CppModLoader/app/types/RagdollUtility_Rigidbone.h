#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RagdollUtility_Rigidbone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RagdollUtility_Rigidbone__Class** type_info;
        inline app::RagdollUtility_Rigidbone__Class* get_class() {
            return il2cpp::get_nested_class<app::RagdollUtility_Rigidbone__Class>(type_info, "RootMotion.FinalIK", "RagdollUtility", "Rigidbone");
        }
        inline app::RagdollUtility_Rigidbone* create() {
            return il2cpp::create_object<app::RagdollUtility_Rigidbone>(get_class());
        }
        inline app::RagdollUtility_Rigidbone__Array* create_array(int size) {
            return il2cpp::array_new<app::RagdollUtility_Rigidbone__Array>(get_class(), size);
        }
        inline app::RagdollUtility_Rigidbone__Array* create_array(const std::vector<app::RagdollUtility_Rigidbone*>& items) {
            return il2cpp::array_new<app::RagdollUtility_Rigidbone__Array>(get_class(), items);
        }
    } // namespace RagdollUtility_Rigidbone
} // namespace app::classes::types
