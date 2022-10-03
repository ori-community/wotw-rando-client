#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XGameSaveReadBlobDataCompleted {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XGameSaveReadBlobDataCompleted__Class** type_info;
        inline app::XGameSaveReadBlobDataCompleted__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveReadBlobDataCompleted__Class>(type_info, "XGamingRuntime", "XGameSaveReadBlobDataCompleted");
        }
        inline app::XGameSaveReadBlobDataCompleted* create() {
            return il2cpp::create_object<app::XGameSaveReadBlobDataCompleted>(get_class());
        }
    } // namespace XGameSaveReadBlobDataCompleted
} // namespace app::classes::types
