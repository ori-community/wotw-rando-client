#pragma once
#include <Modloader/app/structs/ColliderAnimatorSystem.h>
#include <Modloader/app/structs/ColliderAnimatorSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColliderAnimatorSystem {
        inline app::ColliderAnimatorSystem__Class** type_info() {
            static app::ColliderAnimatorSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ColliderAnimatorSystem__Class**)(modloader::win::memory::resolve_rva(0x04740CF0));
            }
            return cache;
        }
        inline app::ColliderAnimatorSystem__Class* get_class() {
            return il2cpp::get_class<app::ColliderAnimatorSystem__Class>(type_info(), "", "ColliderAnimatorSystem");
        }
        inline app::ColliderAnimatorSystem* create() {
            return il2cpp::create_object<app::ColliderAnimatorSystem>(get_class());
        }
    } // namespace ColliderAnimatorSystem
} // namespace app::classes::types
