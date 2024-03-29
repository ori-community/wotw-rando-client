#pragma once
#include <Modloader/app/structs/SoundHost__Array.h>
#include <Modloader/app/structs/SoundHost__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundHost__Array {
        inline app::SoundHost__Array__Class** type_info() {
            static app::SoundHost__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundHost__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundHost__Array__Class* get_class() {
            return il2cpp::get_class<app::SoundHost__Array__Class>(type_info(), "Moon.Wwise", "SoundHost[]");
        }
        inline app::SoundHost__Array* create() {
            return il2cpp::create_object<app::SoundHost__Array>(get_class());
        }
    } // namespace SoundHost__Array
} // namespace app::classes::types
