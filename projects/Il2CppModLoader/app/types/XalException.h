#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalException__Class** type_info;
        inline app::XalException__Class* get_class() {
            return il2cpp::get_class<app::XalException__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalException");
        }
        inline app::XalException* create() {
            return il2cpp::create_object<app::XalException>(get_class());
        }
    } // namespace XalException
} // namespace app::classes::types
