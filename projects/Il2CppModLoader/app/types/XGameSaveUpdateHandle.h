#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XGameSaveUpdateHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XGameSaveUpdateHandle__Class** type_info;
        inline app::XGameSaveUpdateHandle__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveUpdateHandle__Class>(type_info, "XGamingRuntime", "XGameSaveUpdateHandle");
        }
        inline app::XGameSaveUpdateHandle* create() {
            return il2cpp::create_object<app::XGameSaveUpdateHandle>(get_class());
        }
    } // namespace XGameSaveUpdateHandle
} // namespace app::classes::types
