#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EditorBrowsableAttribute {
        inline app::EditorBrowsableAttribute__Class** type_info = (app::EditorBrowsableAttribute__Class**)(modloader::win::memory::resolve_rva(0x04724710));
        inline app::EditorBrowsableAttribute__Class* get_class() {
            return il2cpp::get_class<app::EditorBrowsableAttribute__Class>(type_info, "System.ComponentModel", "EditorBrowsableAttribute");
        }
        inline app::EditorBrowsableAttribute* create() {
            return il2cpp::create_object<app::EditorBrowsableAttribute>(get_class());
        }
    } // namespace EditorBrowsableAttribute
} // namespace app::classes::types
