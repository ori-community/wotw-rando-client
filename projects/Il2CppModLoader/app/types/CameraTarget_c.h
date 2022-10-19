#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraTarget_c {
        inline app::CameraTarget_c__Class** type_info = (app::CameraTarget_c__Class**)(modloader::win::memory::resolve_rva(0x0478F3E0));
        inline app::CameraTarget_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraTarget_c__Class>(type_info, "", "CameraTarget", "<>c");
        }
        inline app::CameraTarget_c* create() {
            return il2cpp::create_object<app::CameraTarget_c>(get_class());
        }
    } // namespace CameraTarget_c
} // namespace app::classes::types
