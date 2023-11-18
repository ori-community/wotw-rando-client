#pragma once
#include <Modloader/app/structs/GroupRole__Array.h>
#include <Modloader/app/structs/GroupRole__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroupRole__Array {
        inline app::GroupRole__Array__Class** type_info() {
            static app::GroupRole__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroupRole__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroupRole__Array__Class* get_class() {
            return il2cpp::get_class<app::GroupRole__Array__Class>(type_info(), "PlayFab.GroupsModels", "GroupRole[]");
        }
        inline app::GroupRole__Array* create() {
            return il2cpp::create_object<app::GroupRole__Array>(get_class());
        }
    } // namespace GroupRole__Array
} // namespace app::classes::types
