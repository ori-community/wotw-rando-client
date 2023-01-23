#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerLinkedAccount__Array__Class.h>
#include <Modloader/app/structs/PlayerLinkedAccount__Array.h>

namespace app::classes::types {
    namespace PlayerLinkedAccount__Array {
        namespace {
            inline app::PlayerLinkedAccount__Array__Class* type_info_ref = nullptr;
        }
        inline app::PlayerLinkedAccount__Array__Class** type_info = &type_info_ref;
        inline app::PlayerLinkedAccount__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerLinkedAccount__Array__Class>(type_info, "PlayFab.ServerModels", "PlayerLinkedAccount[]");
        }
        inline app::PlayerLinkedAccount__Array* create() {
            return il2cpp::create_object<app::PlayerLinkedAccount__Array>(get_class());
        }
    } // namespace PlayerLinkedAccount__Array
} // namespace app::classes::types
