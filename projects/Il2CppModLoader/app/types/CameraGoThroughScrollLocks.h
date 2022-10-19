#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraGoThroughScrollLocks {
        inline app::CameraGoThroughScrollLocks__Class** type_info = (app::CameraGoThroughScrollLocks__Class**)(modloader::win::memory::resolve_rva(0x04754D68));
        inline app::CameraGoThroughScrollLocks__Class* get_class() {
            return il2cpp::get_class<app::CameraGoThroughScrollLocks__Class>(type_info, "", "CameraGoThroughScrollLocks");
        }
        inline app::CameraGoThroughScrollLocks* create() {
            return il2cpp::create_object<app::CameraGoThroughScrollLocks>(get_class());
        }
    } // namespace CameraGoThroughScrollLocks
} // namespace app::classes::types
