#pragma once
#include <Modloader/app/structs/RaceRunState.h>
#include <Modloader/app/structs/RaceRunState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceRunState {
        inline app::RaceRunState__Class** type_info() {
            static app::RaceRunState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceRunState__Class**)(modloader::win::memory::resolve_rva(0x04786A18));
            }
            return cache;
        }
        inline app::RaceRunState__Class* get_class() {
            return il2cpp::get_class<app::RaceRunState__Class>(type_info(), "", "RaceRunState");
        }
        inline app::RaceRunState* create() {
            return il2cpp::create_object<app::RaceRunState>(get_class());
        }
    } // namespace RaceRunState
} // namespace app::classes::types
