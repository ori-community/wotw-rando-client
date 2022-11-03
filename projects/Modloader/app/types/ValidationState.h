#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValidationState {
        inline app::ValidationState__Class** type_info = (app::ValidationState__Class**)(modloader::win::memory::resolve_rva(0x0478B658));
        inline app::ValidationState__Class* get_class() {
            return il2cpp::get_class<app::ValidationState__Class>(type_info, "System.Xml.Schema", "ValidationState");
        }
        inline app::ValidationState* create() {
            return il2cpp::create_object<app::ValidationState>(get_class());
        }
    } // namespace ValidationState
} // namespace app::classes::types
