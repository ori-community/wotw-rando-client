#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalService_XalLogCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalService_XalLogCallback__Class** type_info;
        inline app::XalService_XalLogCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalLogCallback__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "XalLogCallback");
        }
        inline app::XalService_XalLogCallback* create() {
            return il2cpp::create_object<app::XalService_XalLogCallback>(get_class());
        }
    } // namespace XalService_XalLogCallback
} // namespace app::classes::types
