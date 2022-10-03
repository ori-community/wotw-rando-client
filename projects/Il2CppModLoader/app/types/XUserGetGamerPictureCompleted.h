#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XUserGetGamerPictureCompleted {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XUserGetGamerPictureCompleted__Class** type_info;
        inline app::XUserGetGamerPictureCompleted__Class* get_class() {
            return il2cpp::get_class<app::XUserGetGamerPictureCompleted__Class>(type_info, "XGamingRuntime", "XUserGetGamerPictureCompleted");
        }
        inline app::XUserGetGamerPictureCompleted* create() {
            return il2cpp::create_object<app::XUserGetGamerPictureCompleted>(get_class());
        }
    } // namespace XUserGetGamerPictureCompleted
} // namespace app::classes::types
