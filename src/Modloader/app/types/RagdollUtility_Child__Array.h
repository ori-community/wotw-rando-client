#pragma once
#include <Modloader/app/structs/RagdollUtility_Child__Array.h>
#include <Modloader/app/structs/RagdollUtility_Child__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RagdollUtility_Child__Array {
        inline app::RagdollUtility_Child__Array__Class** type_info() {
            static app::RagdollUtility_Child__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RagdollUtility_Child__Array__Class**)(modloader::win::memory::resolve_rva(0x0472FE98));
            }
            return cache;
        }
        inline app::RagdollUtility_Child__Array__Class* get_class() {
            return il2cpp::get_class<app::RagdollUtility_Child__Array__Class>(type_info(), "RootMotion.FinalIK", "RagdollUtility+Child[]");
        }
        inline app::RagdollUtility_Child__Array* create() {
            return il2cpp::create_object<app::RagdollUtility_Child__Array>(get_class());
        }
    } // namespace RagdollUtility_Child__Array
} // namespace app::classes::types
