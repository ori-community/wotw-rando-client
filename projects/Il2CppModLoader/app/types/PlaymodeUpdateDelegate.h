#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlaymodeUpdateDelegate {
        inline app::PlaymodeUpdateDelegate__Class** type_info = (app::PlaymodeUpdateDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472CE48));
        inline app::PlaymodeUpdateDelegate__Class* get_class() {
            return il2cpp::get_class<app::PlaymodeUpdateDelegate__Class>(type_info, "", "PlaymodeUpdateDelegate");
        }
        inline app::PlaymodeUpdateDelegate* create() {
            return il2cpp::create_object<app::PlaymodeUpdateDelegate>(get_class());
        }
    } // namespace PlaymodeUpdateDelegate
} // namespace app::classes::types
