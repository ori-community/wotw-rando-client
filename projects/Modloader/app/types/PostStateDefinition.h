#pragma once
#include <Modloader/app/structs/PostStateDefinition.h>
#include <Modloader/app/structs/PostStateDefinition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostStateDefinition {
        inline app::PostStateDefinition__Class** type_info() {
            static app::PostStateDefinition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostStateDefinition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostStateDefinition__Class* get_class() {
            return il2cpp::get_class<app::PostStateDefinition__Class>(type_info(), "", "PostStateDefinition");
        }
        inline app::PostStateDefinition* create() {
            return il2cpp::create_object<app::PostStateDefinition>(get_class());
        }
    } // namespace PostStateDefinition
} // namespace app::classes::types
