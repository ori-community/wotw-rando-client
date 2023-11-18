#pragma once
#include <Modloader/app/structs/PostLateUpdate_SortingGroupsUpdate.h>
#include <Modloader/app/structs/PostLateUpdate_SortingGroupsUpdate__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_SortingGroupsUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_SortingGroupsUpdate {
        inline app::PostLateUpdate_SortingGroupsUpdate__Class** type_info() {
            static app::PostLateUpdate_SortingGroupsUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_SortingGroupsUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_SortingGroupsUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_SortingGroupsUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "SortingGroupsUpdate");
        }
        inline app::PostLateUpdate_SortingGroupsUpdate* create() {
            return il2cpp::create_object<app::PostLateUpdate_SortingGroupsUpdate>(get_class());
        }
        inline app::PostLateUpdate_SortingGroupsUpdate__Boxed* box(app::PostLateUpdate_SortingGroupsUpdate value) {
            return il2cpp::box_value<app::PostLateUpdate_SortingGroupsUpdate__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_SortingGroupsUpdate
} // namespace app::classes::types
