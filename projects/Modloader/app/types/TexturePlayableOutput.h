#pragma once
#include <Modloader/app/structs/TexturePlayableOutput.h>
#include <Modloader/app/structs/TexturePlayableOutput__Boxed.h>
#include <Modloader/app/structs/TexturePlayableOutput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TexturePlayableOutput {
        inline app::TexturePlayableOutput__Class** type_info() {
            static app::TexturePlayableOutput__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TexturePlayableOutput__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TexturePlayableOutput__Class* get_class() {
            return il2cpp::get_class<app::TexturePlayableOutput__Class>(type_info(), "UnityEngine.Experimental.Playables", "TexturePlayableOutput");
        }
        inline app::TexturePlayableOutput* create() {
            return il2cpp::create_object<app::TexturePlayableOutput>(get_class());
        }
        inline app::TexturePlayableOutput__Boxed* box(app::TexturePlayableOutput value) {
            return il2cpp::box_value<app::TexturePlayableOutput__Boxed>(get_class(), value);
        }
    } // namespace TexturePlayableOutput
} // namespace app::classes::types
