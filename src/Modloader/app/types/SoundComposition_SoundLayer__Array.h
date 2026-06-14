#pragma once
#include <Modloader/app/structs/SoundComposition_SoundLayer__Array.h>
#include <Modloader/app/structs/SoundComposition_SoundLayer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundComposition_SoundLayer__Array {
        inline app::SoundComposition_SoundLayer__Array__Class** type_info() {
            static app::SoundComposition_SoundLayer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundComposition_SoundLayer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundComposition_SoundLayer__Array__Class* get_class() {
            return il2cpp::get_class<app::SoundComposition_SoundLayer__Array__Class>(type_info(), "", "SoundComposition+SoundLayer[]");
        }
        inline app::SoundComposition_SoundLayer__Array* create() {
            return il2cpp::create_object<app::SoundComposition_SoundLayer__Array>(get_class());
        }
    } // namespace SoundComposition_SoundLayer__Array
} // namespace app::classes::types
