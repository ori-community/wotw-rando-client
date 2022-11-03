#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUISkin {
        inline app::GUISkin__Class** type_info = (app::GUISkin__Class**)(modloader::win::memory::resolve_rva(0x04760078));
        inline app::GUISkin__Class* get_class() {
            return il2cpp::get_class<app::GUISkin__Class>(type_info, "UnityEngine", "GUISkin");
        }
        inline app::GUISkin* create() {
            return il2cpp::create_object<app::GUISkin>(get_class());
        }
    } // namespace GUISkin
} // namespace app::classes::types
