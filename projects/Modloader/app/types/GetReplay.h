#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetReplay {
        inline app::GetReplay__Class** type_info = (app::GetReplay__Class**)(modloader::win::memory::resolve_rva(0x04708C38));
        inline app::GetReplay__Class* get_class() {
            return il2cpp::get_class<app::GetReplay__Class>(type_info, "", "GetReplay");
        }
        inline app::GetReplay* create() {
            return il2cpp::create_object<app::GetReplay>(get_class());
        }
    } // namespace GetReplay
} // namespace app::classes::types
