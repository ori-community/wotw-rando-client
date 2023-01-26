#pragma once
#include <Modloader/app/structs/IntUberState.h>
#include <Modloader/app/structs/IntUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntUberState {
        inline app::IntUberState__Class** type_info() {
            static app::IntUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IntUberState__Class**)(modloader::win::memory::resolve_rva(0x04750038));
            }
            return cache;
        }
        inline app::IntUberState__Class* get_class() {
            return il2cpp::get_class<app::IntUberState__Class>(type_info(), "Moon", "IntUberState");
        }
        inline app::IntUberState* create() {
            return il2cpp::create_object<app::IntUberState>(get_class());
        }
    } // namespace IntUberState
} // namespace app::classes::types
