#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RagdollUtility_Rigidbone__Array {
        inline app::RagdollUtility_Rigidbone__Array__Class** type_info = (app::RagdollUtility_Rigidbone__Array__Class**)(modloader::win::memory::resolve_rva(0x04780588));
        inline app::RagdollUtility_Rigidbone__Array__Class* get_class() {
            return il2cpp::get_class<app::RagdollUtility_Rigidbone__Array__Class>(type_info, "RootMotion.FinalIK", "RagdollUtility+Rigidbone[]");
        }
        inline app::RagdollUtility_Rigidbone__Array* create() {
            return il2cpp::create_object<app::RagdollUtility_Rigidbone__Array>(get_class());
        }
    } // namespace RagdollUtility_Rigidbone__Array
} // namespace app::classes::types
