#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConnectedPlayer__Array {
        namespace {
            inline app::ConnectedPlayer__Array__Class* type_info_ref = nullptr;
        }
        inline app::ConnectedPlayer__Array__Class** type_info = &type_info_ref;
        inline app::ConnectedPlayer__Array__Class* get_class() {
            return il2cpp::get_class<app::ConnectedPlayer__Array__Class>(type_info, "PlayFab.MultiplayerModels", "ConnectedPlayer[]");
        }
        inline app::ConnectedPlayer__Array* create() {
            return il2cpp::create_object<app::ConnectedPlayer__Array>(get_class());
        }
    } // namespace ConnectedPlayer__Array
} // namespace app::classes::types
