#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceRunState {
        inline app::RaceRunState__Class** type_info = (app::RaceRunState__Class**)(modloader::win::memory::resolve_rva(0x04786A18));
        inline app::RaceRunState__Class* get_class() {
            return il2cpp::get_class<app::RaceRunState__Class>(type_info, "", "RaceRunState");
        }
        inline app::RaceRunState* create() {
            return il2cpp::create_object<app::RaceRunState>(get_class());
        }
    } // namespace RaceRunState
} // namespace app::classes::types
