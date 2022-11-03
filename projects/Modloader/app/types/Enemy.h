#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Enemy {
        inline app::Enemy__Class** type_info = (app::Enemy__Class**)(modloader::win::memory::resolve_rva(0x04721EB0));
        inline app::Enemy__Class* get_class() {
            return il2cpp::get_class<app::Enemy__Class>(type_info, "", "Enemy");
        }
        inline app::Enemy* create() {
            return il2cpp::create_object<app::Enemy>(get_class());
        }
    } // namespace Enemy
} // namespace app::classes::types
