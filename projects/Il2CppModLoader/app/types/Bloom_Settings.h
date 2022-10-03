#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Bloom_Settings {
        namespace {
            app::Bloom_Settings__Class* type_info_ref = nullptr;
        }
        app::Bloom_Settings__Class** type_info = &type_info_ref;
        inline app::Bloom_Settings__Class* get_class() {
            return il2cpp::get_nested_class<app::Bloom_Settings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "Bloom", "Settings");
        }
        inline app::Bloom_Settings* create() {
            return il2cpp::create_object<app::Bloom_Settings>(get_class());
        }
        inline app::Bloom_Settings__Boxed* box(app::Bloom_Settings value) {
            return il2cpp::box_value<app::Bloom_Settings__Boxed>(get_class(), value);
        }
    } // namespace Bloom_Settings
} // namespace app::classes::types
