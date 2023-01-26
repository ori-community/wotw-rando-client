#pragma once
#include <Modloader/app/structs/SoundMessages.h>
#include <Modloader/app/structs/SoundMessages__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundMessages {
        inline app::SoundMessages__Class** type_info() {
            static app::SoundMessages__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundMessages__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundMessages__Class* get_class() {
            return il2cpp::get_class<app::SoundMessages__Class>(type_info(), "", "SoundMessages");
        }
        inline app::SoundMessages* create() {
            return il2cpp::create_object<app::SoundMessages>(get_class());
        }
    } // namespace SoundMessages
} // namespace app::classes::types
