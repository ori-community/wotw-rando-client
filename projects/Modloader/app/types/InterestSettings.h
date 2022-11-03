#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InterestSettings {
        inline app::InterestSettings__Class** type_info = (app::InterestSettings__Class**)(modloader::win::memory::resolve_rva(0x0474D1A0));
        inline app::InterestSettings__Class* get_class() {
            return il2cpp::get_class<app::InterestSettings__Class>(type_info, "Moon", "InterestSettings");
        }
        inline app::InterestSettings* create() {
            return il2cpp::create_object<app::InterestSettings>(get_class());
        }
    } // namespace InterestSettings
} // namespace app::classes::types
