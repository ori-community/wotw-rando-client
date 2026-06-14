#pragma once
#include <Modloader/app/structs/FollowMode__Enum.h>
#include <Modloader/app/structs/FollowMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FollowMode__Enum {
        inline app::FollowMode__Enum__Class** type_info() {
            static app::FollowMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FollowMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FollowMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FollowMode__Enum__Class>(type_info(), "Moon", "FollowMode");
        }
        inline app::FollowMode__Enum* create() {
            return il2cpp::create_object<app::FollowMode__Enum>(get_class());
        }
    } // namespace FollowMode__Enum
} // namespace app::classes::types
