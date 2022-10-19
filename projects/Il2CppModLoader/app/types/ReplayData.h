#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReplayData {
        inline app::ReplayData__Class** type_info = (app::ReplayData__Class**)(modloader::win::memory::resolve_rva(0x04729598));
        inline app::ReplayData__Class* get_class() {
            return il2cpp::get_class<app::ReplayData__Class>(type_info, "Moon.Race.Networking", "ReplayData");
        }
        inline app::ReplayData* create() {
            return il2cpp::create_object<app::ReplayData>(get_class());
        }
    } // namespace ReplayData
} // namespace app::classes::types
