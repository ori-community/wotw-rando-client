#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RC2Transform {
        inline app::RC2Transform__Class** type_info = (app::RC2Transform__Class**)(modloader::win::memory::resolve_rva(0x047821D8));
        inline app::RC2Transform__Class* get_class() {
            return il2cpp::get_class<app::RC2Transform__Class>(type_info, "System.Security.Cryptography", "RC2Transform");
        }
        inline app::RC2Transform* create() {
            return il2cpp::create_object<app::RC2Transform>(get_class());
        }
    } // namespace RC2Transform
} // namespace app::classes::types
