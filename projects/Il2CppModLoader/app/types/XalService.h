#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalService {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalService__Class** type_info;
        inline app::XalService__Class* get_class() {
            return il2cpp::get_class<app::XalService__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService");
        }
        inline app::XalService* create() {
            return il2cpp::create_object<app::XalService>(get_class());
        }
    } // namespace XalService
} // namespace app::classes::types
