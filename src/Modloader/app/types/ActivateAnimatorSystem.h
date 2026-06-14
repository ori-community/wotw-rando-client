#pragma once
#include <Modloader/app/structs/ActivateAnimatorSystem.h>
#include <Modloader/app/structs/ActivateAnimatorSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivateAnimatorSystem {
        inline app::ActivateAnimatorSystem__Class** type_info() {
            static app::ActivateAnimatorSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ActivateAnimatorSystem__Class**)(modloader::win::memory::resolve_rva(0x04796D70));
            }
            return cache;
        }
        inline app::ActivateAnimatorSystem__Class* get_class() {
            return il2cpp::get_class<app::ActivateAnimatorSystem__Class>(type_info(), "Moon.Timeline", "ActivateAnimatorSystem");
        }
        inline app::ActivateAnimatorSystem* create() {
            return il2cpp::create_object<app::ActivateAnimatorSystem>(get_class());
        }
    } // namespace ActivateAnimatorSystem
} // namespace app::classes::types
