#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Kickback {
        inline app::Kickback__Class** type_info = (app::Kickback__Class**)(modloader::win::memory::resolve_rva(0x0478BF20));
        inline app::Kickback__Class* get_class() {
            return il2cpp::get_class<app::Kickback__Class>(type_info, "", "Kickback");
        }
        inline app::Kickback* create() {
            return il2cpp::create_object<app::Kickback>(get_class());
        }
    } // namespace Kickback
} // namespace app::classes::types
