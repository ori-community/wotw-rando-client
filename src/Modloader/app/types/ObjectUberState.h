#pragma once
#include <Modloader/app/structs/ObjectUberState.h>
#include <Modloader/app/structs/ObjectUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectUberState {
        inline app::ObjectUberState__Class** type_info() {
            static app::ObjectUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjectUberState__Class**)(modloader::win::memory::resolve_rva(0x0471B4B0));
            }
            return cache;
        }
        inline app::ObjectUberState__Class* get_class() {
            return il2cpp::get_class<app::ObjectUberState__Class>(type_info(), "Moon", "ObjectUberState");
        }
        inline app::ObjectUberState* create() {
            return il2cpp::create_object<app::ObjectUberState>(get_class());
        }
    } // namespace ObjectUberState
} // namespace app::classes::types
