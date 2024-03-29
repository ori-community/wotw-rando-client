#pragma once
#include <Modloader/app/structs/GroupBlock__Array.h>
#include <Modloader/app/structs/GroupBlock__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroupBlock__Array {
        inline app::GroupBlock__Array__Class** type_info() {
            static app::GroupBlock__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroupBlock__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroupBlock__Array__Class* get_class() {
            return il2cpp::get_class<app::GroupBlock__Array__Class>(type_info(), "PlayFab.GroupsModels", "GroupBlock[]");
        }
        inline app::GroupBlock__Array* create() {
            return il2cpp::create_object<app::GroupBlock__Array>(get_class());
        }
    } // namespace GroupBlock__Array
} // namespace app::classes::types
