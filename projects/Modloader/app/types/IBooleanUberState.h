#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IBooleanUberState__Class.h>

namespace app::classes::types {
    namespace IBooleanUberState {
        inline app::IBooleanUberState__Class** type_info = (app::IBooleanUberState__Class**)(modloader::win::memory::resolve_rva(0x0477D5D8));
        inline app::IBooleanUberState__Class* get_class() {
            return il2cpp::get_class<app::IBooleanUberState__Class>(type_info, "Moon", "IBooleanUberState");
        }
    } // namespace IBooleanUberState
} // namespace app::classes::types
