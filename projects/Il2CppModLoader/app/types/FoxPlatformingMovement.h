#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FoxPlatformingMovement {
        namespace {
            inline app::FoxPlatformingMovement__Class* type_info_ref = nullptr;
        }
        inline app::FoxPlatformingMovement__Class** type_info = &type_info_ref;
        inline app::FoxPlatformingMovement__Class* get_class() {
            return il2cpp::get_class<app::FoxPlatformingMovement__Class>(type_info, "", "FoxPlatformingMovement");
        }
        inline app::FoxPlatformingMovement* create() {
            return il2cpp::create_object<app::FoxPlatformingMovement>(get_class());
        }
    } // namespace FoxPlatformingMovement
} // namespace app::classes::types
