#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XUserGetGamerPictureCompleted__Class.h>
#include <Modloader/app/structs/XUserGetGamerPictureCompleted.h>

namespace app::classes::types {
    namespace XUserGetGamerPictureCompleted {
        inline app::XUserGetGamerPictureCompleted__Class** type_info = (app::XUserGetGamerPictureCompleted__Class**)(modloader::win::memory::resolve_rva(0x0476E070));
        inline app::XUserGetGamerPictureCompleted__Class* get_class() {
            return il2cpp::get_class<app::XUserGetGamerPictureCompleted__Class>(type_info, "XGamingRuntime", "XUserGetGamerPictureCompleted");
        }
        inline app::XUserGetGamerPictureCompleted* create() {
            return il2cpp::create_object<app::XUserGetGamerPictureCompleted>(get_class());
        }
    } // namespace XUserGetGamerPictureCompleted
} // namespace app::classes::types
