#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PathFollower {
        inline app::PathFollower__Class** type_info = (app::PathFollower__Class**)(modloader::win::memory::resolve_rva(0x0478D4F8));
        inline app::PathFollower__Class* get_class() {
            return il2cpp::get_class<app::PathFollower__Class>(type_info, "", "PathFollower");
        }
        inline app::PathFollower* create() {
            return il2cpp::create_object<app::PathFollower>(get_class());
        }
    } // namespace PathFollower
} // namespace app::classes::types
