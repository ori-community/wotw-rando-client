#pragma once
#include <Modloader/app/structs/RagdollUtility_DisableRagdollSmooth_d_21.h>
#include <Modloader/app/structs/RagdollUtility_DisableRagdollSmooth_d_21__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RagdollUtility_DisableRagdollSmooth_d_21 {
        inline app::RagdollUtility_DisableRagdollSmooth_d_21__Class** type_info() {
            static app::RagdollUtility_DisableRagdollSmooth_d_21__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RagdollUtility_DisableRagdollSmooth_d_21__Class**)(modloader::win::memory::resolve_rva(0x04773078));
            }
            return cache;
        }
        inline app::RagdollUtility_DisableRagdollSmooth_d_21__Class* get_class() {
            return il2cpp::get_nested_class<app::RagdollUtility_DisableRagdollSmooth_d_21__Class>(type_info(), "RootMotion.FinalIK", "RagdollUtility", "<DisableRagdollSmooth>d__21");
        }
        inline app::RagdollUtility_DisableRagdollSmooth_d_21* create() {
            return il2cpp::create_object<app::RagdollUtility_DisableRagdollSmooth_d_21>(get_class());
        }
    } // namespace RagdollUtility_DisableRagdollSmooth_d_21
} // namespace app::classes::types
