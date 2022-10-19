#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleJsonInstance {
        inline app::SimpleJsonInstance__Class** type_info = (app::SimpleJsonInstance__Class**)(modloader::win::memory::resolve_rva(0x047035B8));
        inline app::SimpleJsonInstance__Class* get_class() {
            return il2cpp::get_class<app::SimpleJsonInstance__Class>(type_info, "PlayFab.Json", "SimpleJsonInstance");
        }
        inline app::SimpleJsonInstance* create() {
            return il2cpp::create_object<app::SimpleJsonInstance>(get_class());
        }
    } // namespace SimpleJsonInstance
} // namespace app::classes::types
