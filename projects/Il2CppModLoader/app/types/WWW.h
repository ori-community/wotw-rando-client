#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WWW {
        inline app::WWW__Class** type_info = (app::WWW__Class**)(modloader::win::memory::resolve_rva(0x04761AC0));
        inline app::WWW__Class* get_class() {
            return il2cpp::get_class<app::WWW__Class>(type_info, "UnityEngine", "WWW");
        }
        inline app::WWW* create() {
            return il2cpp::create_object<app::WWW>(get_class());
        }
    } // namespace WWW
} // namespace app::classes::types
