#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightPriority {
        inline app::LightPriority__Class** type_info = (app::LightPriority__Class**)(modloader::win::memory::resolve_rva(0x047151D0));
        inline app::LightPriority__Class* get_class() {
            return il2cpp::get_class<app::LightPriority__Class>(type_info, "", "LightPriority");
        }
        inline app::LightPriority* create() {
            return il2cpp::create_object<app::LightPriority>(get_class());
        }
    } // namespace LightPriority
} // namespace app::classes::types
