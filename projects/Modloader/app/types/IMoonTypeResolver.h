#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMoonTypeResolver {
        inline app::IMoonTypeResolver__Class** type_info = (app::IMoonTypeResolver__Class**)(modloader::win::memory::resolve_rva(0x0471A9C0));
        inline app::IMoonTypeResolver__Class* get_class() {
            return il2cpp::get_class<app::IMoonTypeResolver__Class>(type_info, "Moon", "IMoonTypeResolver");
        }
    } // namespace IMoonTypeResolver
} // namespace app::classes::types
