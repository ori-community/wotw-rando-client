#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AmbientValueAttribute {
        inline app::AmbientValueAttribute__Class** type_info = (app::AmbientValueAttribute__Class**)(modloader::win::memory::resolve_rva(0x0471EFF0));
        inline app::AmbientValueAttribute__Class* get_class() {
            return il2cpp::get_class<app::AmbientValueAttribute__Class>(type_info, "System.ComponentModel", "AmbientValueAttribute");
        }
        inline app::AmbientValueAttribute* create() {
            return il2cpp::create_object<app::AmbientValueAttribute>(get_class());
        }
    } // namespace AmbientValueAttribute
} // namespace app::classes::types
