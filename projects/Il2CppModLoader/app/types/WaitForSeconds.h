#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaitForSeconds {
        inline app::WaitForSeconds__Class** type_info = (app::WaitForSeconds__Class**)(modloader::win::memory::resolve_rva(0x047597B0));
        inline app::WaitForSeconds__Class* get_class() {
            return il2cpp::get_class<app::WaitForSeconds__Class>(type_info, "UnityEngine", "WaitForSeconds");
        }
        inline app::WaitForSeconds* create() {
            return il2cpp::create_object<app::WaitForSeconds>(get_class());
        }
    } // namespace WaitForSeconds
} // namespace app::classes::types
