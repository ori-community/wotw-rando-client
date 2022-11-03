#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalGamerPictureSize__Enum {
        namespace {
            inline app::XalGamerPictureSize__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XalGamerPictureSize__Enum__Class** type_info = &type_info_ref;
        inline app::XalGamerPictureSize__Enum__Class* get_class() {
            return il2cpp::get_class<app::XalGamerPictureSize__Enum__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalGamerPictureSize");
        }
        inline app::XalGamerPictureSize__Enum* create() {
            return il2cpp::create_object<app::XalGamerPictureSize__Enum>(get_class());
        }
    } // namespace XalGamerPictureSize__Enum
} // namespace app::classes::types
