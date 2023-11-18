#pragma once
#include <Modloader/app/structs/XUserGamerPictureSize__Enum.h>
#include <Modloader/app/structs/XUserGamerPictureSize__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XUserGamerPictureSize__Enum {
        inline app::XUserGamerPictureSize__Enum__Class** type_info() {
            static app::XUserGamerPictureSize__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XUserGamerPictureSize__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XUserGamerPictureSize__Enum__Class* get_class() {
            return il2cpp::get_class<app::XUserGamerPictureSize__Enum__Class>(type_info(), "XGamingRuntime", "XUserGamerPictureSize");
        }
        inline app::XUserGamerPictureSize__Enum* create() {
            return il2cpp::create_object<app::XUserGamerPictureSize__Enum>(get_class());
        }
    } // namespace XUserGamerPictureSize__Enum
} // namespace app::classes::types
