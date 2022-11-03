#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IIntUberState {
        inline app::IIntUberState__Class** type_info = (app::IIntUberState__Class**)(modloader::win::memory::resolve_rva(0x04764DD8));
        inline app::IIntUberState__Class* get_class() {
            return il2cpp::get_class<app::IIntUberState__Class>(type_info, "Moon", "IIntUberState");
        }
    } // namespace IIntUberState
} // namespace app::classes::types
