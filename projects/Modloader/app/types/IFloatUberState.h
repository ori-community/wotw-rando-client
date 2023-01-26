#pragma once
#include <Modloader/app/structs/IFloatUberState.h>
#include <Modloader/app/structs/IFloatUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFloatUberState {
        inline app::IFloatUberState__Class** type_info() {
            static app::IFloatUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IFloatUberState__Class**)(modloader::win::memory::resolve_rva(0x0470EB68));
            }
            return cache;
        }
        inline app::IFloatUberState__Class* get_class() {
            return il2cpp::get_class<app::IFloatUberState__Class>(type_info(), "Moon", "IFloatUberState");
        }
    } // namespace IFloatUberState
} // namespace app::classes::types
