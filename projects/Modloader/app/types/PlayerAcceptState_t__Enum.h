#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerAcceptState_t__Enum {
        namespace {
            inline app::PlayerAcceptState_t__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PlayerAcceptState_t__Enum__Class** type_info = &type_info_ref;
        inline app::PlayerAcceptState_t__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlayerAcceptState_t__Enum__Class>(type_info, "Steamworks", "PlayerAcceptState_t");
        }
        inline app::PlayerAcceptState_t__Enum* create() {
            return il2cpp::create_object<app::PlayerAcceptState_t__Enum>(get_class());
        }
    } // namespace PlayerAcceptState_t__Enum
} // namespace app::classes::types
