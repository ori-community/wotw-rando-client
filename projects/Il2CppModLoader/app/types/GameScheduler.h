#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameScheduler {
        inline app::GameScheduler__Class** type_info = (app::GameScheduler__Class**)(modloader::win::memory::resolve_rva(0x04713EF0));
        inline app::GameScheduler__Class* get_class() {
            return il2cpp::get_class<app::GameScheduler__Class>(type_info, "", "GameScheduler");
        }
        inline app::GameScheduler* create() {
            return il2cpp::create_object<app::GameScheduler>(get_class());
        }
    } // namespace GameScheduler
} // namespace app::classes::types
