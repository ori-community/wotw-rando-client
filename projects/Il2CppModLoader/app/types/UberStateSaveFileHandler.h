#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateSaveFileHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateSaveFileHandler__Class** type_info;
        inline app::UberStateSaveFileHandler__Class* get_class() {
            return il2cpp::get_class<app::UberStateSaveFileHandler__Class>(type_info, "Moon", "UberStateSaveFileHandler");
        }
        inline app::UberStateSaveFileHandler* create() {
            return il2cpp::create_object<app::UberStateSaveFileHandler>(get_class());
        }
    } // namespace UberStateSaveFileHandler
} // namespace app::classes::types
