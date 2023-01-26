#pragma once
#include <Modloader/app/structs/SoundSourcePlaceholder.h>
#include <Modloader/app/structs/SoundSourcePlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundSourcePlaceholder {
        inline app::SoundSourcePlaceholder__Class** type_info() {
            static app::SoundSourcePlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundSourcePlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundSourcePlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SoundSourcePlaceholder__Class>(type_info(), "", "SoundSourcePlaceholder");
        }
        inline app::SoundSourcePlaceholder* create() {
            return il2cpp::create_object<app::SoundSourcePlaceholder>(get_class());
        }
    } // namespace SoundSourcePlaceholder
} // namespace app::classes::types
