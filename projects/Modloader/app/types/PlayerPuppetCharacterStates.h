#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerPuppetCharacterStates {
        namespace {
            inline app::PlayerPuppetCharacterStates__Class* type_info_ref = nullptr;
        }
        inline app::PlayerPuppetCharacterStates__Class** type_info = &type_info_ref;
        inline app::PlayerPuppetCharacterStates__Class* get_class() {
            return il2cpp::get_class<app::PlayerPuppetCharacterStates__Class>(type_info, "", "PlayerPuppetCharacterStates");
        }
        inline app::PlayerPuppetCharacterStates* create() {
            return il2cpp::create_object<app::PlayerPuppetCharacterStates>(get_class());
        }
    } // namespace PlayerPuppetCharacterStates
} // namespace app::classes::types
