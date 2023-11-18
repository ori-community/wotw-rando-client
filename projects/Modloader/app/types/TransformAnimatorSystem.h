#pragma once
#include <Modloader/app/structs/TransformAnimatorSystem.h>
#include <Modloader/app/structs/TransformAnimatorSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformAnimatorSystem {
        inline app::TransformAnimatorSystem__Class** type_info() {
            static app::TransformAnimatorSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TransformAnimatorSystem__Class**)(modloader::win::memory::resolve_rva(0x0472C620));
            }
            return cache;
        }
        inline app::TransformAnimatorSystem__Class* get_class() {
            return il2cpp::get_class<app::TransformAnimatorSystem__Class>(type_info(), "Moon.Timeline", "TransformAnimatorSystem");
        }
        inline app::TransformAnimatorSystem* create() {
            return il2cpp::create_object<app::TransformAnimatorSystem>(get_class());
        }
    } // namespace TransformAnimatorSystem
} // namespace app::classes::types
