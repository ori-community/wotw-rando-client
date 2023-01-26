#pragma once
#include <Modloader/app/structs/SoundProvider__Array.h>
#include <Modloader/app/structs/SoundProvider__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundProvider__Array {
        inline app::SoundProvider__Array__Class** type_info() {
            static app::SoundProvider__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundProvider__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::SoundProvider__Array__Class>(type_info(), "", "SoundProvider[]");
        }
        inline app::SoundProvider__Array* create() {
            return il2cpp::create_object<app::SoundProvider__Array>(get_class());
        }
    } // namespace SoundProvider__Array
} // namespace app::classes::types
