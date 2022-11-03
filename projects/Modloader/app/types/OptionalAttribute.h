#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OptionalAttribute {
        inline app::OptionalAttribute__Class** type_info = (app::OptionalAttribute__Class**)(modloader::win::memory::resolve_rva(0x04731170));
        inline app::OptionalAttribute__Class* get_class() {
            return il2cpp::get_class<app::OptionalAttribute__Class>(type_info, "System.Runtime.InteropServices", "OptionalAttribute");
        }
        inline app::OptionalAttribute* create() {
            return il2cpp::create_object<app::OptionalAttribute>(get_class());
        }
    } // namespace OptionalAttribute
} // namespace app::classes::types
