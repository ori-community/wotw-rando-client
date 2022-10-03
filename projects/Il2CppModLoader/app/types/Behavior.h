#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Behavior {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Behavior__Class** type_info;
        inline app::Behavior__Class* get_class() {
            return il2cpp::get_class<app::Behavior__Class>(type_info, "TriangleNet", "Behavior");
        }
        inline app::Behavior* create() {
            return il2cpp::create_object<app::Behavior>(get_class());
        }
    } // namespace Behavior
} // namespace app::classes::types
