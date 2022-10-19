#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocomotionUtils {
        inline app::LocomotionUtils__Class** type_info = (app::LocomotionUtils__Class**)(modloader::win::memory::resolve_rva(0x04749800));
        inline app::LocomotionUtils__Class* get_class() {
            return il2cpp::get_class<app::LocomotionUtils__Class>(type_info, "", "LocomotionUtils");
        }
        inline app::LocomotionUtils* create() {
            return il2cpp::create_object<app::LocomotionUtils>(get_class());
        }
    } // namespace LocomotionUtils
} // namespace app::classes::types
