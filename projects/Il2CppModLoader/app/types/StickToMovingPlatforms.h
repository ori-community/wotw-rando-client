#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StickToMovingPlatforms {
        namespace {
            inline app::StickToMovingPlatforms__Class* type_info_ref = nullptr;
        }
        inline app::StickToMovingPlatforms__Class** type_info = &type_info_ref;
        inline app::StickToMovingPlatforms__Class* get_class() {
            return il2cpp::get_class<app::StickToMovingPlatforms__Class>(type_info, "", "StickToMovingPlatforms");
        }
        inline app::StickToMovingPlatforms* create() {
            return il2cpp::create_object<app::StickToMovingPlatforms>(get_class());
        }
    } // namespace StickToMovingPlatforms
} // namespace app::classes::types
