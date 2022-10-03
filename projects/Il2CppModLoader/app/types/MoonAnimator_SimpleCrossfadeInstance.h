#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_SimpleCrossfadeInstance {
        namespace {
            app::MoonAnimator_SimpleCrossfadeInstance__Class* type_info_ref = nullptr;
        }
        app::MoonAnimator_SimpleCrossfadeInstance__Class** type_info = &type_info_ref;
        inline app::MoonAnimator_SimpleCrossfadeInstance__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_SimpleCrossfadeInstance__Class>(type_info, "Moon", "MoonAnimator", "SimpleCrossfadeInstance");
        }
        inline app::MoonAnimator_SimpleCrossfadeInstance* create() {
            return il2cpp::create_object<app::MoonAnimator_SimpleCrossfadeInstance>(get_class());
        }
        inline app::MoonAnimator_SimpleCrossfadeInstance__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_SimpleCrossfadeInstance__Array>(get_class(), size);
        }
    } // namespace MoonAnimator_SimpleCrossfadeInstance
} // namespace app::classes::types
