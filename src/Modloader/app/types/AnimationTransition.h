#pragma once
#include <Modloader/app/structs/AnimationTransition.h>
#include <Modloader/app/structs/AnimationTransition__Array.h>
#include <Modloader/app/structs/AnimationTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationTransition {
        inline app::AnimationTransition__Class** type_info() {
            static app::AnimationTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationTransition__Class**)(modloader::win::memory::resolve_rva(0x047253B0));
            }
            return cache;
        }
        inline app::AnimationTransition__Class* get_class() {
            return il2cpp::get_class<app::AnimationTransition__Class>(type_info(), "Moon", "AnimationTransition");
        }
        inline app::AnimationTransition* create() {
            return il2cpp::create_object<app::AnimationTransition>(get_class());
        }
        inline app::AnimationTransition__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationTransition__Array>(get_class(), size);
        }
        inline app::AnimationTransition__Array* create_array(const std::vector<app::AnimationTransition*>& items) {
            return il2cpp::array_new<app::AnimationTransition__Array>(get_class(), items);
        }
    } // namespace AnimationTransition
} // namespace app::classes::types
