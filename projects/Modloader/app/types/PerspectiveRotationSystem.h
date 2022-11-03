#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PerspectiveRotationSystem {
        inline app::PerspectiveRotationSystem__Class** type_info = (app::PerspectiveRotationSystem__Class**)(modloader::win::memory::resolve_rva(0x04775920));
        inline app::PerspectiveRotationSystem__Class* get_class() {
            return il2cpp::get_class<app::PerspectiveRotationSystem__Class>(type_info, "", "PerspectiveRotationSystem");
        }
        inline app::PerspectiveRotationSystem* create() {
            return il2cpp::create_object<app::PerspectiveRotationSystem>(get_class());
        }
    } // namespace PerspectiveRotationSystem
} // namespace app::classes::types
