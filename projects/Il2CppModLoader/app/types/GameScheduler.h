#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameScheduler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameScheduler__Class** type_info;
        inline app::GameScheduler__Class* get_class() {
            return il2cpp::get_class<app::GameScheduler__Class>(type_info, "", "GameScheduler");
        }
        inline app::GameScheduler* create() {
            return il2cpp::create_object<app::GameScheduler>(get_class());
        }
    } // namespace GameScheduler
} // namespace app::classes::types
