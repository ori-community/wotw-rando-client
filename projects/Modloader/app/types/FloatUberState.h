#pragma once
#include <Modloader/app/structs/FloatUberState.h>
#include <Modloader/app/structs/FloatUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatUberState {
        inline app::FloatUberState__Class** type_info() {
            static app::FloatUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FloatUberState__Class**)(modloader::win::memory::resolve_rva(0x04708810));
            }
            return cache;
        }
        inline app::FloatUberState__Class* get_class() {
            return il2cpp::get_class<app::FloatUberState__Class>(type_info(), "Moon", "FloatUberState");
        }
        inline app::FloatUberState* create() {
            return il2cpp::create_object<app::FloatUberState>(get_class());
        }
    } // namespace FloatUberState
} // namespace app::classes::types
