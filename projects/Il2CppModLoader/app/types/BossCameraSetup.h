#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BossCameraSetup {
        namespace {
            inline app::BossCameraSetup__Class* type_info_ref = nullptr;
        }
        inline app::BossCameraSetup__Class** type_info = &type_info_ref;
        inline app::BossCameraSetup__Class* get_class() {
            return il2cpp::get_class<app::BossCameraSetup__Class>(type_info, "Moon", "BossCameraSetup");
        }
        inline app::BossCameraSetup* create() {
            return il2cpp::create_object<app::BossCameraSetup>(get_class());
        }
    } // namespace BossCameraSetup
} // namespace app::classes::types
