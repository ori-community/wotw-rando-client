#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Positions {
        inline app::Positions__Class** type_info = (app::Positions__Class**)(modloader::win::memory::resolve_rva(0x04733188));
        inline app::Positions__Class* get_class() {
            return il2cpp::get_class<app::Positions__Class>(type_info, "System.Xml.Schema", "Positions");
        }
        inline app::Positions* create() {
            return il2cpp::create_object<app::Positions>(get_class());
        }
    } // namespace Positions
} // namespace app::classes::types
