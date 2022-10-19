#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlatformMovementListOfColliders {
        namespace {
            inline app::PlatformMovementListOfColliders__Class* type_info_ref = nullptr;
        }
        inline app::PlatformMovementListOfColliders__Class** type_info = &type_info_ref;
        inline app::PlatformMovementListOfColliders__Class* get_class() {
            return il2cpp::get_class<app::PlatformMovementListOfColliders__Class>(type_info, "", "PlatformMovementListOfColliders");
        }
        inline app::PlatformMovementListOfColliders* create() {
            return il2cpp::create_object<app::PlatformMovementListOfColliders>(get_class());
        }
    } // namespace PlatformMovementListOfColliders
} // namespace app::classes::types
