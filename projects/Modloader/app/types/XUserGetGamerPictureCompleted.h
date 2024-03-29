#pragma once
#include <Modloader/app/structs/XUserGetGamerPictureCompleted.h>
#include <Modloader/app/structs/XUserGetGamerPictureCompleted__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XUserGetGamerPictureCompleted {
        inline app::XUserGetGamerPictureCompleted__Class** type_info() {
            static app::XUserGetGamerPictureCompleted__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XUserGetGamerPictureCompleted__Class**)(modloader::win::memory::resolve_rva(0x0476E070));
            }
            return cache;
        }
        inline app::XUserGetGamerPictureCompleted__Class* get_class() {
            return il2cpp::get_class<app::XUserGetGamerPictureCompleted__Class>(type_info(), "XGamingRuntime", "XUserGetGamerPictureCompleted");
        }
        inline app::XUserGetGamerPictureCompleted* create() {
            return il2cpp::create_object<app::XUserGetGamerPictureCompleted>(get_class());
        }
    } // namespace XUserGetGamerPictureCompleted
} // namespace app::classes::types
