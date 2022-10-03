#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayableBinding_CreateOutputMethod {
        namespace {
            app::PlayableBinding_CreateOutputMethod__Class* type_info_ref = nullptr;
        }
        app::PlayableBinding_CreateOutputMethod__Class** type_info = &type_info_ref;
        inline app::PlayableBinding_CreateOutputMethod__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayableBinding_CreateOutputMethod__Class>(type_info, "UnityEngine.Playables", "PlayableBinding", "CreateOutputMethod");
        }
        inline app::PlayableBinding_CreateOutputMethod* create() {
            return il2cpp::create_object<app::PlayableBinding_CreateOutputMethod>(get_class());
        }
    } // namespace PlayableBinding_CreateOutputMethod
} // namespace app::classes::types
