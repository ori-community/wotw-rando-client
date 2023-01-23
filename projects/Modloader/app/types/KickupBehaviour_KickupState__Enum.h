#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KickupBehaviour_KickupState__Enum__Class.h>
#include <Modloader/app/structs/KickupBehaviour_KickupState__Enum.h>

namespace app::classes::types {
    namespace KickupBehaviour_KickupState__Enum {
        namespace {
            inline app::KickupBehaviour_KickupState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::KickupBehaviour_KickupState__Enum__Class** type_info = &type_info_ref;
        inline app::KickupBehaviour_KickupState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KickupBehaviour_KickupState__Enum__Class>(type_info, "", "KickupBehaviour", "KickupState");
        }
        inline app::KickupBehaviour_KickupState__Enum* create() {
            return il2cpp::create_object<app::KickupBehaviour_KickupState__Enum>(get_class());
        }
    } // namespace KickupBehaviour_KickupState__Enum
} // namespace app::classes::types
