#pragma once
#include <Modloader/app/structs/SoundPlayer__Array.h>
#include <Modloader/app/structs/SoundPlayer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundPlayer__Array {
        inline app::SoundPlayer__Array__Class** type_info() {
            static app::SoundPlayer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundPlayer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundPlayer__Array__Class* get_class() {
            return il2cpp::get_class<app::SoundPlayer__Array__Class>(type_info(), "", "SoundPlayer[]");
        }
        inline app::SoundPlayer__Array* create() {
            return il2cpp::create_object<app::SoundPlayer__Array>(get_class());
        }
    } // namespace SoundPlayer__Array
} // namespace app::classes::types
