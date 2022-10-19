#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LandOnVisuals {
        inline app::LandOnVisuals__Class** type_info = (app::LandOnVisuals__Class**)(modloader::win::memory::resolve_rva(0x04754E80));
        inline app::LandOnVisuals__Class* get_class() {
            return il2cpp::get_class<app::LandOnVisuals__Class>(type_info, "", "LandOnVisuals");
        }
        inline app::LandOnVisuals* create() {
            return il2cpp::create_object<app::LandOnVisuals>(get_class());
        }
    } // namespace LandOnVisuals
} // namespace app::classes::types
