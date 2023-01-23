#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SwarmFollowPathBehaviour__Class.h>
#include <Modloader/app/structs/SwarmFollowPathBehaviour.h>

namespace app::classes::types {
    namespace SwarmFollowPathBehaviour {
        namespace {
            inline app::SwarmFollowPathBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SwarmFollowPathBehaviour__Class** type_info = &type_info_ref;
        inline app::SwarmFollowPathBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SwarmFollowPathBehaviour__Class>(type_info, "", "SwarmFollowPathBehaviour");
        }
        inline app::SwarmFollowPathBehaviour* create() {
            return il2cpp::create_object<app::SwarmFollowPathBehaviour>(get_class());
        }
    } // namespace SwarmFollowPathBehaviour
} // namespace app::classes::types
