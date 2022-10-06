#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RagdollUtility_Child {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RagdollUtility_Child__Class** type_info;
        inline app::RagdollUtility_Child__Class* get_class() {
            return il2cpp::get_nested_class<app::RagdollUtility_Child__Class>(type_info, "RootMotion.FinalIK", "RagdollUtility", "Child");
        }
        inline app::RagdollUtility_Child* create() {
            return il2cpp::create_object<app::RagdollUtility_Child>(get_class());
        }
        inline app::RagdollUtility_Child__Array* create_array(int size) {
            return il2cpp::array_new<app::RagdollUtility_Child__Array>(get_class(), size);
        }
        inline app::RagdollUtility_Child__Array* create_array(const std::vector<app::RagdollUtility_Child*>& items) {
            return il2cpp::array_new<app::RagdollUtility_Child__Array>(get_class(), items);
        }
    } // namespace RagdollUtility_Child
} // namespace app::classes::types
