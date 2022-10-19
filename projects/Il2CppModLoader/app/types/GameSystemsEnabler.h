#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameSystemsEnabler {
        inline app::GameSystemsEnabler__Class** type_info = (app::GameSystemsEnabler__Class**)(modloader::win::memory::resolve_rva(0x04760010));
        inline app::GameSystemsEnabler__Class* get_class() {
            return il2cpp::get_class<app::GameSystemsEnabler__Class>(type_info, "", "GameSystemsEnabler");
        }
        inline app::GameSystemsEnabler* create() {
            return il2cpp::create_object<app::GameSystemsEnabler>(get_class());
        }
    } // namespace GameSystemsEnabler
} // namespace app::classes::types
