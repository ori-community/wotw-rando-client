#pragma once
#include <Modloader/app/structs/EndState.h>
#include <Modloader/app/structs/EndState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EndState {
        inline app::EndState__Class** type_info() {
            static app::EndState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EndState__Class**)(modloader::win::memory::resolve_rva(0x04726A68));
            }
            return cache;
        }
        inline app::EndState__Class* get_class() {
            return il2cpp::get_class<app::EndState__Class>(type_info(), "", "EndState");
        }
        inline app::EndState* create() {
            return il2cpp::create_object<app::EndState>(get_class());
        }
    } // namespace EndState
} // namespace app::classes::types
