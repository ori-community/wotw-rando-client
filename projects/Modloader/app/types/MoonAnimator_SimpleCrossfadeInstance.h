#pragma once
#include <Modloader/app/structs/MoonAnimator_SimpleCrossfadeInstance.h>
#include <Modloader/app/structs/MoonAnimator_SimpleCrossfadeInstance__Array.h>
#include <Modloader/app/structs/MoonAnimator_SimpleCrossfadeInstance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_SimpleCrossfadeInstance {
        inline app::MoonAnimator_SimpleCrossfadeInstance__Class** type_info() {
            static app::MoonAnimator_SimpleCrossfadeInstance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimator_SimpleCrossfadeInstance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimator_SimpleCrossfadeInstance__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_SimpleCrossfadeInstance__Class>(type_info(), "Moon", "MoonAnimator", "SimpleCrossfadeInstance");
        }
        inline app::MoonAnimator_SimpleCrossfadeInstance* create() {
            return il2cpp::create_object<app::MoonAnimator_SimpleCrossfadeInstance>(get_class());
        }
        inline app::MoonAnimator_SimpleCrossfadeInstance__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_SimpleCrossfadeInstance__Array>(get_class(), size);
        }
        inline app::MoonAnimator_SimpleCrossfadeInstance__Array* create_array(const std::vector<app::MoonAnimator_SimpleCrossfadeInstance*>& items) {
            return il2cpp::array_new<app::MoonAnimator_SimpleCrossfadeInstance__Array>(get_class(), items);
        }
    } // namespace MoonAnimator_SimpleCrossfadeInstance
} // namespace app::classes::types
