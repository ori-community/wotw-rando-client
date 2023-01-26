#pragma once
#include <Modloader/app/structs/XalGamerPictureSize__Enum.h>
#include <Modloader/app/structs/XalGamerPictureSize__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalGamerPictureSize__Enum {
        inline app::XalGamerPictureSize__Enum__Class** type_info() {
            static app::XalGamerPictureSize__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XalGamerPictureSize__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XalGamerPictureSize__Enum__Class* get_class() {
            return il2cpp::get_class<app::XalGamerPictureSize__Enum__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalGamerPictureSize");
        }
        inline app::XalGamerPictureSize__Enum* create() {
            return il2cpp::create_object<app::XalGamerPictureSize__Enum>(get_class());
        }
    } // namespace XalGamerPictureSize__Enum
} // namespace app::classes::types
