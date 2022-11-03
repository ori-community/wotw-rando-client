#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMemSettings {
        inline app::AkMemSettings__Class** type_info = (app::AkMemSettings__Class**)(modloader::win::memory::resolve_rva(0x047614B8));
        inline app::AkMemSettings__Class* get_class() {
            return il2cpp::get_class<app::AkMemSettings__Class>(type_info, "", "AkMemSettings");
        }
        inline app::AkMemSettings* create() {
            return il2cpp::create_object<app::AkMemSettings>(get_class());
        }
    } // namespace AkMemSettings
} // namespace app::classes::types
