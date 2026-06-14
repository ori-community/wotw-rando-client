#pragma once
#include <Modloader/app/structs/TransparencyAnimatorSystem.h>
#include <Modloader/app/structs/TransparencyAnimatorSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransparencyAnimatorSystem {
        inline app::TransparencyAnimatorSystem__Class** type_info() {
            static app::TransparencyAnimatorSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TransparencyAnimatorSystem__Class**)(modloader::win::memory::resolve_rva(0x0476F570));
            }
            return cache;
        }
        inline app::TransparencyAnimatorSystem__Class* get_class() {
            return il2cpp::get_class<app::TransparencyAnimatorSystem__Class>(type_info(), "Moon.Timeline", "TransparencyAnimatorSystem");
        }
        inline app::TransparencyAnimatorSystem* create() {
            return il2cpp::create_object<app::TransparencyAnimatorSystem>(get_class());
        }
    } // namespace TransparencyAnimatorSystem
} // namespace app::classes::types
