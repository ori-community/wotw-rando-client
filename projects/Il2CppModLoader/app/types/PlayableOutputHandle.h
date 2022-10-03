#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayableOutputHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayableOutputHandle__Class** type_info;
        inline app::PlayableOutputHandle__Class* get_class() {
            return il2cpp::get_class<app::PlayableOutputHandle__Class>(type_info, "UnityEngine.Playables", "PlayableOutputHandle");
        }
        inline app::PlayableOutputHandle* create() {
            return il2cpp::create_object<app::PlayableOutputHandle>(get_class());
        }
        inline app::PlayableOutputHandle__Boxed* box(app::PlayableOutputHandle value) {
            return il2cpp::box_value<app::PlayableOutputHandle__Boxed>(get_class(), value);
        }
    } // namespace PlayableOutputHandle
} // namespace app::classes::types
