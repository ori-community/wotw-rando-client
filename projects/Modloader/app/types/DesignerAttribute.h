#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DesignerAttribute {
        inline app::DesignerAttribute__Class** type_info = (app::DesignerAttribute__Class**)(modloader::win::memory::resolve_rva(0x04782130));
        inline app::DesignerAttribute__Class* get_class() {
            return il2cpp::get_class<app::DesignerAttribute__Class>(type_info, "System.ComponentModel", "DesignerAttribute");
        }
        inline app::DesignerAttribute* create() {
            return il2cpp::create_object<app::DesignerAttribute>(get_class());
        }
    } // namespace DesignerAttribute
} // namespace app::classes::types
