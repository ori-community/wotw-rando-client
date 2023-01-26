#pragma once
#include <Modloader/app/structs/SoundType__Enum.h>
#include <Modloader/app/structs/SoundType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundType__Enum {
        inline app::SoundType__Enum__Class** type_info() {
            static app::SoundType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SoundType__Enum__Class>(type_info(), "", "SoundType");
        }
        inline app::SoundType__Enum* create() {
            return il2cpp::create_object<app::SoundType__Enum>(get_class());
        }
    } // namespace SoundType__Enum
} // namespace app::classes::types
