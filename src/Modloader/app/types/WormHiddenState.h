#pragma once
#include <Modloader/app/structs/WormHiddenState.h>
#include <Modloader/app/structs/WormHiddenState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WormHiddenState {
        inline app::WormHiddenState__Class** type_info() {
            static app::WormHiddenState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WormHiddenState__Class**)(modloader::win::memory::resolve_rva(0x04759558));
            }
            return cache;
        }
        inline app::WormHiddenState__Class* get_class() {
            return il2cpp::get_class<app::WormHiddenState__Class>(type_info(), "", "WormHiddenState");
        }
        inline app::WormHiddenState* create() {
            return il2cpp::create_object<app::WormHiddenState>(get_class());
        }
    } // namespace WormHiddenState
} // namespace app::classes::types
