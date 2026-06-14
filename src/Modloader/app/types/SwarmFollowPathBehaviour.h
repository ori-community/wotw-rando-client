#pragma once
#include <Modloader/app/structs/SwarmFollowPathBehaviour.h>
#include <Modloader/app/structs/SwarmFollowPathBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwarmFollowPathBehaviour {
        inline app::SwarmFollowPathBehaviour__Class** type_info() {
            static app::SwarmFollowPathBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwarmFollowPathBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwarmFollowPathBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SwarmFollowPathBehaviour__Class>(type_info(), "", "SwarmFollowPathBehaviour");
        }
        inline app::SwarmFollowPathBehaviour* create() {
            return il2cpp::create_object<app::SwarmFollowPathBehaviour>(get_class());
        }
    } // namespace SwarmFollowPathBehaviour
} // namespace app::classes::types
