#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FollowMode__Enum__Class.h>
#include <Modloader/app/structs/FollowMode__Enum.h>

namespace app::classes::types {
    namespace FollowMode__Enum {
        namespace {
            inline app::FollowMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FollowMode__Enum__Class** type_info = &type_info_ref;
        inline app::FollowMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FollowMode__Enum__Class>(type_info, "Moon", "FollowMode");
        }
        inline app::FollowMode__Enum* create() {
            return il2cpp::create_object<app::FollowMode__Enum>(get_class());
        }
    } // namespace FollowMode__Enum
} // namespace app::classes::types
