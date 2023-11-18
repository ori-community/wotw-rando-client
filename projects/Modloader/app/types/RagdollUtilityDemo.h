#pragma once
#include <Modloader/app/structs/RagdollUtilityDemo.h>
#include <Modloader/app/structs/RagdollUtilityDemo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RagdollUtilityDemo {
        inline app::RagdollUtilityDemo__Class** type_info() {
            static app::RagdollUtilityDemo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RagdollUtilityDemo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RagdollUtilityDemo__Class* get_class() {
            return il2cpp::get_class<app::RagdollUtilityDemo__Class>(type_info(), "RootMotion.Demos", "RagdollUtilityDemo");
        }
        inline app::RagdollUtilityDemo* create() {
            return il2cpp::create_object<app::RagdollUtilityDemo>(get_class());
        }
    } // namespace RagdollUtilityDemo
} // namespace app::classes::types
