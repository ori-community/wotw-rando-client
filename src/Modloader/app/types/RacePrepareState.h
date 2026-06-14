#pragma once
#include <Modloader/app/structs/RacePrepareState.h>
#include <Modloader/app/structs/RacePrepareState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RacePrepareState {
        inline app::RacePrepareState__Class** type_info() {
            static app::RacePrepareState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RacePrepareState__Class**)(modloader::win::memory::resolve_rva(0x0476A100));
            }
            return cache;
        }
        inline app::RacePrepareState__Class* get_class() {
            return il2cpp::get_class<app::RacePrepareState__Class>(type_info(), "", "RacePrepareState");
        }
        inline app::RacePrepareState* create() {
            return il2cpp::create_object<app::RacePrepareState>(get_class());
        }
    } // namespace RacePrepareState
} // namespace app::classes::types
