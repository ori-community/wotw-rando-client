#pragma once
#include <Modloader/app/structs/MoonAnimatorSystem_AnimatorPriorityComparer.h>
#include <Modloader/app/structs/MoonAnimatorSystem_AnimatorPriorityComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimatorSystem_AnimatorPriorityComparer {
        inline app::MoonAnimatorSystem_AnimatorPriorityComparer__Class** type_info() {
            static app::MoonAnimatorSystem_AnimatorPriorityComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonAnimatorSystem_AnimatorPriorityComparer__Class**)(modloader::win::memory::resolve_rva(0x0478FD68));
            }
            return cache;
        }
        inline app::MoonAnimatorSystem_AnimatorPriorityComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimatorSystem_AnimatorPriorityComparer__Class>(type_info(), "Moon", "MoonAnimatorSystem", "AnimatorPriorityComparer");
        }
        inline app::MoonAnimatorSystem_AnimatorPriorityComparer* create() {
            return il2cpp::create_object<app::MoonAnimatorSystem_AnimatorPriorityComparer>(get_class());
        }
    } // namespace MoonAnimatorSystem_AnimatorPriorityComparer
} // namespace app::classes::types
