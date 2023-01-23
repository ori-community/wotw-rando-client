#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InternalInflateConstants__Class.h>
#include <Modloader/app/structs/InternalInflateConstants.h>

namespace app::classes::types {
    namespace InternalInflateConstants {
        inline app::InternalInflateConstants__Class** type_info = (app::InternalInflateConstants__Class**)(modloader::win::memory::resolve_rva(0x047359F8));
        inline app::InternalInflateConstants__Class* get_class() {
            return il2cpp::get_class<app::InternalInflateConstants__Class>(type_info, "Ionic.Zlib", "InternalInflateConstants");
        }
        inline app::InternalInflateConstants* create() {
            return il2cpp::create_object<app::InternalInflateConstants>(get_class());
        }
    } // namespace InternalInflateConstants
} // namespace app::classes::types
