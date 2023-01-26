#pragma once
#include <Modloader/app/structs/PostStateDefinition_PostState__Array.h>
#include <Modloader/app/structs/PostStateDefinition_PostState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostStateDefinition_PostState__Array {
        inline app::PostStateDefinition_PostState__Array__Class** type_info() {
            static app::PostStateDefinition_PostState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostStateDefinition_PostState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostStateDefinition_PostState__Array__Class* get_class() {
            return il2cpp::get_class<app::PostStateDefinition_PostState__Array__Class>(type_info(), "", "PostStateDefinition+PostState[]");
        }
        inline app::PostStateDefinition_PostState__Array* create() {
            return il2cpp::create_object<app::PostStateDefinition_PostState__Array>(get_class());
        }
    } // namespace PostStateDefinition_PostState__Array
} // namespace app::classes::types
