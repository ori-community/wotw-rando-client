#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MiscDebugMenuPage_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MiscDebugMenuPage_c__Class** type_info;
        inline app::MiscDebugMenuPage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MiscDebugMenuPage_c__Class>(type_info, "", "MiscDebugMenuPage", "<>c");
        }
        inline app::MiscDebugMenuPage_c* create() {
            return il2cpp::create_object<app::MiscDebugMenuPage_c>(get_class());
        }
    } // namespace MiscDebugMenuPage_c
} // namespace app::classes::types
