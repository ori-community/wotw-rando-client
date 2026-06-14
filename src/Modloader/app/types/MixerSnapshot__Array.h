#pragma once
#include <Modloader/app/structs/MixerSnapshot__Array.h>
#include <Modloader/app/structs/MixerSnapshot__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MixerSnapshot__Array {
        inline app::MixerSnapshot__Array__Class** type_info() {
            static app::MixerSnapshot__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MixerSnapshot__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MixerSnapshot__Array__Class* get_class() {
            return il2cpp::get_class<app::MixerSnapshot__Array__Class>(type_info(), "", "MixerSnapshot[]");
        }
        inline app::MixerSnapshot__Array* create() {
            return il2cpp::create_object<app::MixerSnapshot__Array>(get_class());
        }
    } // namespace MixerSnapshot__Array
} // namespace app::classes::types
