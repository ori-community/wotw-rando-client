#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeathsData {
        inline app::DeathsData__Class** type_info = (app::DeathsData__Class**)(modloader::win::memory::resolve_rva(0x04761638));
        inline app::DeathsData__Class* get_class() {
            return il2cpp::get_class<app::DeathsData__Class>(type_info, "", "DeathsData");
        }
        inline app::DeathsData* create() {
            return il2cpp::create_object<app::DeathsData>(get_class());
        }
    } // namespace DeathsData
} // namespace app::classes::types
