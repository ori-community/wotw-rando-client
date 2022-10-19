#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraTarget {
        inline app::CameraTarget__Class** type_info = (app::CameraTarget__Class**)(modloader::win::memory::resolve_rva(0x047630E0));
        inline app::CameraTarget__Class* get_class() {
            return il2cpp::get_class<app::CameraTarget__Class>(type_info, "", "CameraTarget");
        }
        inline app::CameraTarget* create() {
            return il2cpp::create_object<app::CameraTarget>(get_class());
        }
    } // namespace CameraTarget
} // namespace app::classes::types
