#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceRequestResult {
        inline app::RaceRequestResult__Class** type_info = (app::RaceRequestResult__Class**)(modloader::win::memory::resolve_rva(0x04766548));
        inline app::RaceRequestResult__Class* get_class() {
            return il2cpp::get_class<app::RaceRequestResult__Class>(type_info, "SystemIntegration.Races", "RaceRequestResult");
        }
        inline app::RaceRequestResult* create() {
            return il2cpp::create_object<app::RaceRequestResult>(get_class());
        }
    } // namespace RaceRequestResult
} // namespace app::classes::types
