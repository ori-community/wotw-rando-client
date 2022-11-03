#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BoolPref {
        inline app::BoolPref__Class** type_info = (app::BoolPref__Class**)(modloader::win::memory::resolve_rva(0x04716300));
        inline app::BoolPref__Class* get_class() {
            return il2cpp::get_class<app::BoolPref__Class>(type_info, "Moon.PlayerPrefsUtility", "BoolPref");
        }
        inline app::BoolPref* create() {
            return il2cpp::create_object<app::BoolPref>(get_class());
        }
    } // namespace BoolPref
} // namespace app::classes::types
