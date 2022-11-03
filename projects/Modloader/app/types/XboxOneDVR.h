#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxOneDVR {
        inline app::XboxOneDVR__Class** type_info = (app::XboxOneDVR__Class**)(modloader::win::memory::resolve_rva(0x04787A78));
        inline app::XboxOneDVR__Class* get_class() {
            return il2cpp::get_class<app::XboxOneDVR__Class>(type_info, "", "XboxOneDVR");
        }
        inline app::XboxOneDVR* create() {
            return il2cpp::create_object<app::XboxOneDVR>(get_class());
        }
    } // namespace XboxOneDVR
} // namespace app::classes::types
