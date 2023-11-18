#pragma once
#include <Modloader/app/structs/RammingKnockBackState.h>
#include <Modloader/app/structs/RammingKnockBackState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingKnockBackState {
        inline app::RammingKnockBackState__Class** type_info() {
            static app::RammingKnockBackState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RammingKnockBackState__Class**)(modloader::win::memory::resolve_rva(0x04745240));
            }
            return cache;
        }
        inline app::RammingKnockBackState__Class* get_class() {
            return il2cpp::get_class<app::RammingKnockBackState__Class>(type_info(), "", "RammingKnockBackState");
        }
        inline app::RammingKnockBackState* create() {
            return il2cpp::create_object<app::RammingKnockBackState>(get_class());
        }
    } // namespace RammingKnockBackState
} // namespace app::classes::types
