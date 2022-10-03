#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalService_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalService_c__Class** type_info;
        inline app::XalService_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_c__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "<>c");
        }
        inline app::XalService_c* create() {
            return il2cpp::create_object<app::XalService_c>(get_class());
        }
    } // namespace XalService_c
} // namespace app::classes::types
