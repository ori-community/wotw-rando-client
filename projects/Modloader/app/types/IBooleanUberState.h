#pragma once
#include <Modloader/app/structs/IBooleanUberState.h>
#include <Modloader/app/structs/IBooleanUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBooleanUberState {
        inline app::IBooleanUberState__Class** type_info() {
            static app::IBooleanUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IBooleanUberState__Class**)(modloader::win::memory::resolve_rva(0x0477D5D8));
            }
            return cache;
        }
        inline app::IBooleanUberState__Class* get_class() {
            return il2cpp::get_class<app::IBooleanUberState__Class>(type_info(), "Moon", "IBooleanUberState");
        }
    } // namespace IBooleanUberState
} // namespace app::classes::types
