#pragma once
#include <Modloader/app/structs/SoundComposition.h>
#include <Modloader/app/structs/SoundComposition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundComposition {
        inline app::SoundComposition__Class** type_info() {
            static app::SoundComposition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundComposition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundComposition__Class* get_class() {
            return il2cpp::get_class<app::SoundComposition__Class>(type_info(), "", "SoundComposition");
        }
        inline app::SoundComposition* create() {
            return il2cpp::create_object<app::SoundComposition>(get_class());
        }
    } // namespace SoundComposition
} // namespace app::classes::types
