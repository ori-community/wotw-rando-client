#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPlayFabPlugin__Array {
        namespace {
            app::IPlayFabPlugin__Array__Class* type_info_ref = nullptr;
        }
        app::IPlayFabPlugin__Array__Class** type_info = &type_info_ref;
        inline app::IPlayFabPlugin__Array__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabPlugin__Array__Class>(type_info, "PlayFab", "IPlayFabPlugin[]");
        }
        inline app::IPlayFabPlugin__Array* create() {
            return il2cpp::create_object<app::IPlayFabPlugin__Array>(get_class());
        }
    } // namespace IPlayFabPlugin__Array
} // namespace app::classes::types
