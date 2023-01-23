#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IMaskable__Class.h>

namespace app::classes::types {
    namespace IMaskable {
        inline app::IMaskable__Class** type_info = (app::IMaskable__Class**)(modloader::win::memory::resolve_rva(0x047730C0));
        inline app::IMaskable__Class* get_class() {
            return il2cpp::get_class<app::IMaskable__Class>(type_info, "UnityEngine.UI", "IMaskable");
        }
    } // namespace IMaskable
} // namespace app::classes::types
