#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContrastSettings {
        inline app::ContrastSettings__Class** type_info = (app::ContrastSettings__Class**)(modloader::win::memory::resolve_rva(0x04779E10));
        inline app::ContrastSettings__Class* get_class() {
            return il2cpp::get_class<app::ContrastSettings__Class>(type_info, "", "ContrastSettings");
        }
        inline app::ContrastSettings* create() {
            return il2cpp::create_object<app::ContrastSettings>(get_class());
        }
    } // namespace ContrastSettings
} // namespace app::classes::types
