#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Tablet {
        inline app::Tablet__Class** type_info = (app::Tablet__Class**)(modloader::win::memory::resolve_rva(0x0477BE40));
        inline app::Tablet__Class* get_class() {
            return il2cpp::get_class<app::Tablet__Class>(type_info, "uWintab", "Tablet");
        }
        inline app::Tablet* create() {
            return il2cpp::create_object<app::Tablet>(get_class());
        }
    } // namespace Tablet
} // namespace app::classes::types
