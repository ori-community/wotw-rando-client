#pragma once
#include <Modloader/app/structs/MoonAnimator_AnimationPostprocessMetadata.h>
#include <Modloader/app/structs/MoonAnimator_AnimationPostprocessMetadata__Array.h>
#include <Modloader/app/structs/MoonAnimator_AnimationPostprocessMetadata__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_AnimationPostprocessMetadata {
        inline app::MoonAnimator_AnimationPostprocessMetadata__Class** type_info() {
            static app::MoonAnimator_AnimationPostprocessMetadata__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonAnimator_AnimationPostprocessMetadata__Class**)(modloader::win::memory::resolve_rva(0x0477B5E8));
            }
            return cache;
        }
        inline app::MoonAnimator_AnimationPostprocessMetadata__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_AnimationPostprocessMetadata__Class>(type_info(), "Moon", "MoonAnimator", "AnimationPostprocessMetadata");
        }
        inline app::MoonAnimator_AnimationPostprocessMetadata* create() {
            return il2cpp::create_object<app::MoonAnimator_AnimationPostprocessMetadata>(get_class());
        }
        inline app::MoonAnimator_AnimationPostprocessMetadata__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_AnimationPostprocessMetadata__Array>(get_class(), size);
        }
        inline app::MoonAnimator_AnimationPostprocessMetadata__Array* create_array(const std::vector<app::MoonAnimator_AnimationPostprocessMetadata*>& items) {
            return il2cpp::array_new<app::MoonAnimator_AnimationPostprocessMetadata__Array>(get_class(), items);
        }
    } // namespace MoonAnimator_AnimationPostprocessMetadata
} // namespace app::classes::types
