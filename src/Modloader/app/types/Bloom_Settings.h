#pragma once
#include <Modloader/app/structs/Bloom_Settings.h>
#include <Modloader/app/structs/Bloom_Settings__Boxed.h>
#include <Modloader/app/structs/Bloom_Settings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Bloom_Settings {
        inline app::Bloom_Settings__Class** type_info() {
            static app::Bloom_Settings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Bloom_Settings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Bloom_Settings__Class* get_class() {
            return il2cpp::get_nested_class<app::Bloom_Settings__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "Bloom", "Settings");
        }
        inline app::Bloom_Settings* create() {
            return il2cpp::create_object<app::Bloom_Settings>(get_class());
        }
        inline app::Bloom_Settings__Boxed* box(app::Bloom_Settings value) {
            return il2cpp::box_value<app::Bloom_Settings__Boxed>(get_class(), value);
        }
    } // namespace Bloom_Settings
} // namespace app::classes::types
