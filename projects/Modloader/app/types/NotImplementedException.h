#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotImplementedException {
        inline app::NotImplementedException__Class** type_info = (app::NotImplementedException__Class**)(modloader::win::memory::resolve_rva(0x0471CEF8));
        inline app::NotImplementedException__Class* get_class() {
            return il2cpp::get_class<app::NotImplementedException__Class>(type_info, "System", "NotImplementedException");
        }
        inline app::NotImplementedException* create() {
            return il2cpp::create_object<app::NotImplementedException>(get_class());
        }
    } // namespace NotImplementedException
} // namespace app::classes::types
