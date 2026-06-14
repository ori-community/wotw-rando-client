#pragma once
#include <Modloader/app/structs/RagdollUtility_Rigidbone__Array.h>
#include <Modloader/app/structs/RagdollUtility_Rigidbone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RagdollUtility_Rigidbone__Array {
        inline app::RagdollUtility_Rigidbone__Array__Class** type_info() {
            static app::RagdollUtility_Rigidbone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RagdollUtility_Rigidbone__Array__Class**)(modloader::win::memory::resolve_rva(0x04780588));
            }
            return cache;
        }
        inline app::RagdollUtility_Rigidbone__Array__Class* get_class() {
            return il2cpp::get_class<app::RagdollUtility_Rigidbone__Array__Class>(type_info(), "RootMotion.FinalIK", "RagdollUtility+Rigidbone[]");
        }
        inline app::RagdollUtility_Rigidbone__Array* create() {
            return il2cpp::create_object<app::RagdollUtility_Rigidbone__Array>(get_class());
        }
    } // namespace RagdollUtility_Rigidbone__Array
} // namespace app::classes::types
