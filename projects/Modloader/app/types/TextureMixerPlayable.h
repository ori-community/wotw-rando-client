#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextureMixerPlayable__Class.h>
#include <Modloader/app/structs/TextureMixerPlayable.h>
#include <Modloader/app/structs/TextureMixerPlayable__Boxed.h>

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
