#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace World {
        namespace {
            inline app::World__Class* type_info_ref = nullptr;
        }
        inline app::World__Class** type_info = &type_info_ref;
        inline app::World__Class* get_class() {
            return il2cpp::get_class<app::World__Class>(type_info, "Game", "World");
        }
        inline app::World* create() {
            return il2cpp::create_object<app::World>(get_class());
        }
    } // namespace World
} // namespace app::classes::types
