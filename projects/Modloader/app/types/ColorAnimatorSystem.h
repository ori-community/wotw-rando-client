#pragma once
#include <Modloader/app/structs/ColorAnimatorSystem.h>
#include <Modloader/app/structs/ColorAnimatorSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorAnimatorSystem {
        inline app::ColorAnimatorSystem__Class** type_info() {
            static app::ColorAnimatorSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ColorAnimatorSystem__Class**)(modloader::win::memory::resolve_rva(0x04702BA8));
            }
            return cache;
        }
        inline app::ColorAnimatorSystem__Class* get_class() {
            return il2cpp::get_class<app::ColorAnimatorSystem__Class>(type_info(), "Moon.Timeline", "ColorAnimatorSystem");
        }
        inline app::ColorAnimatorSystem* create() {
            return il2cpp::create_object<app::ColorAnimatorSystem>(get_class());
        }
    } // namespace ColorAnimatorSystem
} // namespace app::classes::types
