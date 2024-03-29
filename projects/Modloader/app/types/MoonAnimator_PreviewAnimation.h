#pragma once
#include <Modloader/app/structs/MoonAnimator_PreviewAnimation.h>
#include <Modloader/app/structs/MoonAnimator_PreviewAnimation__Array.h>
#include <Modloader/app/structs/MoonAnimator_PreviewAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_PreviewAnimation {
        inline app::MoonAnimator_PreviewAnimation__Class** type_info() {
            static app::MoonAnimator_PreviewAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonAnimator_PreviewAnimation__Class**)(modloader::win::memory::resolve_rva(0x04767BA8));
            }
            return cache;
        }
        inline app::MoonAnimator_PreviewAnimation__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_PreviewAnimation__Class>(type_info(), "Moon", "MoonAnimator", "PreviewAnimation");
        }
        inline app::MoonAnimator_PreviewAnimation* create() {
            return il2cpp::create_object<app::MoonAnimator_PreviewAnimation>(get_class());
        }
        inline app::MoonAnimator_PreviewAnimation__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_PreviewAnimation__Array>(get_class(), size);
        }
        inline app::MoonAnimator_PreviewAnimation__Array* create_array(const std::vector<app::MoonAnimator_PreviewAnimation*>& items) {
            return il2cpp::array_new<app::MoonAnimator_PreviewAnimation__Array>(get_class(), items);
        }
    } // namespace MoonAnimator_PreviewAnimation
} // namespace app::classes::types
