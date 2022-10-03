#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Checkpoint_Events {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Checkpoint_Events__Class** type_info;
        inline app::Checkpoint_Events__Class* get_class() {
            return il2cpp::get_nested_class<app::Checkpoint_Events__Class>(type_info, "Game", "Checkpoint", "Events");
        }
        inline app::Checkpoint_Events* create() {
            return il2cpp::create_object<app::Checkpoint_Events>(get_class());
        }
    } // namespace Checkpoint_Events
} // namespace app::classes::types
