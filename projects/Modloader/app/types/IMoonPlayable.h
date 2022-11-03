#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMoonPlayable {
        inline app::IMoonPlayable__Class** type_info = (app::IMoonPlayable__Class**)(modloader::win::memory::resolve_rva(0x047661B8));
        inline app::IMoonPlayable__Class* get_class() {
            return il2cpp::get_class<app::IMoonPlayable__Class>(type_info, "Moon.Timeline", "IMoonPlayable");
        }
    } // namespace IMoonPlayable
} // namespace app::classes::types
