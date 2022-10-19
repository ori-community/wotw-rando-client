#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RagdollUtility_Child__Array {
        inline app::RagdollUtility_Child__Array__Class** type_info = (app::RagdollUtility_Child__Array__Class**)(modloader::win::memory::resolve_rva(0x0472FE98));
        inline app::RagdollUtility_Child__Array__Class* get_class() {
            return il2cpp::get_class<app::RagdollUtility_Child__Array__Class>(type_info, "RootMotion.FinalIK", "RagdollUtility+Child[]");
        }
        inline app::RagdollUtility_Child__Array* create() {
            return il2cpp::create_object<app::RagdollUtility_Child__Array>(get_class());
        }
    } // namespace RagdollUtility_Child__Array
} // namespace app::classes::types
