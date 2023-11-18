#pragma once
#include <Modloader/app/structs/PerspectiveRotationSystem.h>
#include <Modloader/app/structs/PerspectiveRotationSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerspectiveRotationSystem {
        inline app::PerspectiveRotationSystem__Class** type_info() {
            static app::PerspectiveRotationSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PerspectiveRotationSystem__Class**)(modloader::win::memory::resolve_rva(0x04775920));
            }
            return cache;
        }
        inline app::PerspectiveRotationSystem__Class* get_class() {
            return il2cpp::get_class<app::PerspectiveRotationSystem__Class>(type_info(), "", "PerspectiveRotationSystem");
        }
        inline app::PerspectiveRotationSystem* create() {
            return il2cpp::create_object<app::PerspectiveRotationSystem>(get_class());
        }
    } // namespace PerspectiveRotationSystem
} // namespace app::classes::types
