#pragma once
#include <Modloader/app/structs/RagdollUtility.h>
#include <Modloader/app/structs/RagdollUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RagdollUtility {
        inline app::RagdollUtility__Class** type_info() {
            static app::RagdollUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RagdollUtility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RagdollUtility__Class* get_class() {
            return il2cpp::get_class<app::RagdollUtility__Class>(type_info(), "RootMotion.FinalIK", "RagdollUtility");
        }
        inline app::RagdollUtility* create() {
            return il2cpp::create_object<app::RagdollUtility>(get_class());
        }
    } // namespace RagdollUtility
} // namespace app::classes::types
