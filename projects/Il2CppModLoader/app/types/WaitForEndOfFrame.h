#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaitForEndOfFrame {
        inline app::WaitForEndOfFrame__Class** type_info = (app::WaitForEndOfFrame__Class**)(modloader::win::memory::resolve_rva(0x04798B48));
        inline app::WaitForEndOfFrame__Class* get_class() {
            return il2cpp::get_class<app::WaitForEndOfFrame__Class>(type_info, "UnityEngine", "WaitForEndOfFrame");
        }
        inline app::WaitForEndOfFrame* create() {
            return il2cpp::create_object<app::WaitForEndOfFrame>(get_class());
        }
    } // namespace WaitForEndOfFrame
} // namespace app::classes::types
