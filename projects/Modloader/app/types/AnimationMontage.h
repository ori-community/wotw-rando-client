#pragma once
#include <Modloader/app/structs/AnimationMontage.h>
#include <Modloader/app/structs/AnimationMontage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationMontage {
        inline app::AnimationMontage__Class** type_info() {
            static app::AnimationMontage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationMontage__Class**)(modloader::win::memory::resolve_rva(0x0472F048));
            }
            return cache;
        }
        inline app::AnimationMontage__Class* get_class() {
            return il2cpp::get_class<app::AnimationMontage__Class>(type_info(), "Moon", "AnimationMontage");
        }
        inline app::AnimationMontage* create() {
            return il2cpp::create_object<app::AnimationMontage>(get_class());
        }
    } // namespace AnimationMontage
} // namespace app::classes::types
