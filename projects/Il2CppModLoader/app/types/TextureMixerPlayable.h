#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextureMixerPlayable {
        namespace {
            inline app::TextureMixerPlayable__Class* type_info_ref = nullptr;
        }
        inline app::TextureMixerPlayable__Class** type_info = &type_info_ref;
        inline app::TextureMixerPlayable__Class* get_class() {
            return il2cpp::get_class<app::TextureMixerPlayable__Class>(type_info, "UnityEngine.Experimental.Playables", "TextureMixerPlayable");
        }
        inline app::TextureMixerPlayable* create() {
            return il2cpp::create_object<app::TextureMixerPlayable>(get_class());
        }
        inline app::TextureMixerPlayable__Boxed* box(app::TextureMixerPlayable value) {
            return il2cpp::box_value<app::TextureMixerPlayable__Boxed>(get_class(), value);
        }
    } // namespace TextureMixerPlayable
} // namespace app::classes::types
