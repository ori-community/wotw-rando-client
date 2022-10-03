#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XGameSaveSubmitUpdateCompleted {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XGameSaveSubmitUpdateCompleted__Class** type_info;
        inline app::XGameSaveSubmitUpdateCompleted__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveSubmitUpdateCompleted__Class>(type_info, "XGamingRuntime", "XGameSaveSubmitUpdateCompleted");
        }
        inline app::XGameSaveSubmitUpdateCompleted* create() {
            return il2cpp::create_object<app::XGameSaveSubmitUpdateCompleted>(get_class());
        }
    } // namespace XGameSaveSubmitUpdateCompleted
} // namespace app::classes::types
