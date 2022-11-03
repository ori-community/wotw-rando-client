#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EmissiveSettings {
        inline app::EmissiveSettings__Class** type_info = (app::EmissiveSettings__Class**)(modloader::win::memory::resolve_rva(0x04779AA0));
        inline app::EmissiveSettings__Class* get_class() {
            return il2cpp::get_class<app::EmissiveSettings__Class>(type_info, "", "EmissiveSettings");
        }
        inline app::EmissiveSettings* create() {
            return il2cpp::create_object<app::EmissiveSettings>(get_class());
        }
    } // namespace EmissiveSettings
} // namespace app::classes::types
