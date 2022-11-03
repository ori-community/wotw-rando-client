#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EditorAttribute {
        inline app::EditorAttribute__Class** type_info = (app::EditorAttribute__Class**)(modloader::win::memory::resolve_rva(0x04769D18));
        inline app::EditorAttribute__Class* get_class() {
            return il2cpp::get_class<app::EditorAttribute__Class>(type_info, "System.ComponentModel", "EditorAttribute");
        }
        inline app::EditorAttribute* create() {
            return il2cpp::create_object<app::EditorAttribute>(get_class());
        }
    } // namespace EditorAttribute
} // namespace app::classes::types
