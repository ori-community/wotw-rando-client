#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InternalConstants {
        inline app::InternalConstants__Class** type_info = (app::InternalConstants__Class**)(modloader::win::memory::resolve_rva(0x04746788));
        inline app::InternalConstants__Class* get_class() {
            return il2cpp::get_class<app::InternalConstants__Class>(type_info, "Ionic.Zlib", "InternalConstants");
        }
        inline app::InternalConstants* create() {
            return il2cpp::create_object<app::InternalConstants>(get_class());
        }
    } // namespace InternalConstants
} // namespace app::classes::types
