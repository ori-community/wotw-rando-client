#pragma once
#include <Modloader/app/structs/StarSlugShootingState.h>
#include <Modloader/app/structs/StarSlugShootingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StarSlugShootingState {
        inline app::StarSlugShootingState__Class** type_info() {
            static app::StarSlugShootingState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StarSlugShootingState__Class**)(modloader::win::memory::resolve_rva(0x04745670));
            }
            return cache;
        }
        inline app::StarSlugShootingState__Class* get_class() {
            return il2cpp::get_class<app::StarSlugShootingState__Class>(type_info(), "", "StarSlugShootingState");
        }
        inline app::StarSlugShootingState* create() {
            return il2cpp::create_object<app::StarSlugShootingState>(get_class());
        }
    } // namespace StarSlugShootingState
} // namespace app::classes::types
