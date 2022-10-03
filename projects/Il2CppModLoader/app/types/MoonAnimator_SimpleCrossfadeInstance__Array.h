#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_SimpleCrossfadeInstance__Array {
        namespace {
            app::MoonAnimator_SimpleCrossfadeInstance__Array__Class* type_info_ref = nullptr;
        }
        app::MoonAnimator_SimpleCrossfadeInstance__Array__Class** type_info = &type_info_ref;
        inline app::MoonAnimator_SimpleCrossfadeInstance__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator_SimpleCrossfadeInstance__Array__Class>(type_info, "Moon", "MoonAnimator+SimpleCrossfadeInstance[]");
        }
        inline app::MoonAnimator_SimpleCrossfadeInstance__Array* create() {
            return il2cpp::create_object<app::MoonAnimator_SimpleCrossfadeInstance__Array>(get_class());
        }
    } // namespace MoonAnimator_SimpleCrossfadeInstance__Array
} // namespace app::classes::types
