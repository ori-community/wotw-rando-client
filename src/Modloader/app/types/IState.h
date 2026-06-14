#pragma once
#include <Modloader/app/structs/IState.h>
#include <Modloader/app/structs/IState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IState {
        inline app::IState__Class** type_info() {
            static app::IState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IState__Class**)(modloader::win::memory::resolve_rva(0x0473E340));
            }
            return cache;
        }
        inline app::IState__Class* get_class() {
            return il2cpp::get_class<app::IState__Class>(type_info(), "Moon.FSM", "IState");
        }
    } // namespace IState
} // namespace app::classes::types
