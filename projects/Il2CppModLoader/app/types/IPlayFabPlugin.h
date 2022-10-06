#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPlayFabPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPlayFabPlugin__Class** type_info;
        inline app::IPlayFabPlugin__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabPlugin__Class>(type_info, "PlayFab", "IPlayFabPlugin");
        }
        inline app::IPlayFabPlugin__Array* create_array(int size) {
            return il2cpp::array_new<app::IPlayFabPlugin__Array>(get_class(), size);
        }
        inline app::IPlayFabPlugin__Array* create_array(const std::vector<app::IPlayFabPlugin*>& items) {
            return il2cpp::array_new<app::IPlayFabPlugin__Array>(get_class(), items);
        }
    } // namespace IPlayFabPlugin
} // namespace app::classes::types
