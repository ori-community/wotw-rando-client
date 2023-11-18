#pragma once
#include <Modloader/app/structs/KickupBehaviour_KickupState__Enum.h>
#include <Modloader/app/structs/KickupBehaviour_KickupState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KickupBehaviour_KickupState__Enum {
        inline app::KickupBehaviour_KickupState__Enum__Class** type_info() {
            static app::KickupBehaviour_KickupState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KickupBehaviour_KickupState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KickupBehaviour_KickupState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KickupBehaviour_KickupState__Enum__Class>(type_info(), "", "KickupBehaviour", "KickupState");
        }
        inline app::KickupBehaviour_KickupState__Enum* create() {
            return il2cpp::create_object<app::KickupBehaviour_KickupState__Enum>(get_class());
        }
    } // namespace KickupBehaviour_KickupState__Enum
} // namespace app::classes::types
