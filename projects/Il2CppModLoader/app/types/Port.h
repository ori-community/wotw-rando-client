#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Port {
        namespace {
            inline app::Port__Class* type_info_ref = nullptr;
        }
        inline app::Port__Class** type_info = &type_info_ref;
        inline app::Port__Class* get_class() {
            return il2cpp::get_class<app::Port__Class>(type_info, "PlayFab.MultiplayerModels", "Port");
        }
        inline app::Port* create() {
            return il2cpp::create_object<app::Port>(get_class());
        }
        inline app::Port__Array* create_array(int size) {
            return il2cpp::array_new<app::Port__Array>(get_class(), size);
        }
        inline app::Port__Array* create_array(const std::vector<app::Port*>& items) {
            return il2cpp::array_new<app::Port__Array>(get_class(), items);
        }
    } // namespace Port
} // namespace app::classes::types
