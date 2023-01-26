#pragma once
#include <Modloader/app/structs/FishFlopState.h>
#include <Modloader/app/structs/FishFlopState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishFlopState {
        inline app::FishFlopState__Class** type_info() {
            static app::FishFlopState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FishFlopState__Class**)(modloader::win::memory::resolve_rva(0x04706100));
            }
            return cache;
        }
        inline app::FishFlopState__Class* get_class() {
            return il2cpp::get_class<app::FishFlopState__Class>(type_info(), "", "FishFlopState");
        }
        inline app::FishFlopState* create() {
            return il2cpp::create_object<app::FishFlopState>(get_class());
        }
    } // namespace FishFlopState
} // namespace app::classes::types
