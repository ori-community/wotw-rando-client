#pragma once
#include <Modloader/app/structs/RC2Transform.h>
#include <Modloader/app/structs/RC2Transform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RC2Transform {
        inline app::RC2Transform__Class** type_info() {
            static app::RC2Transform__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RC2Transform__Class**)(modloader::win::memory::resolve_rva(0x047821D8));
            }
            return cache;
        }
        inline app::RC2Transform__Class* get_class() {
            return il2cpp::get_class<app::RC2Transform__Class>(type_info(), "System.Security.Cryptography", "RC2Transform");
        }
        inline app::RC2Transform* create() {
            return il2cpp::create_object<app::RC2Transform>(get_class());
        }
    } // namespace RC2Transform
} // namespace app::classes::types
