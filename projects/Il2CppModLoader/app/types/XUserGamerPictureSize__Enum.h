#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XUserGamerPictureSize__Enum {
        namespace {
            inline app::XUserGamerPictureSize__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XUserGamerPictureSize__Enum__Class** type_info = &type_info_ref;
        inline app::XUserGamerPictureSize__Enum__Class* get_class() {
            return il2cpp::get_class<app::XUserGamerPictureSize__Enum__Class>(type_info, "XGamingRuntime", "XUserGamerPictureSize");
        }
        inline app::XUserGamerPictureSize__Enum* create() {
            return il2cpp::create_object<app::XUserGamerPictureSize__Enum>(get_class());
        }
    } // namespace XUserGamerPictureSize__Enum
} // namespace app::classes::types
