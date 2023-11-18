#pragma once
#include <Modloader/app/structs/AcidSlugShootingState.h>
#include <Modloader/app/structs/AcidSlugShootingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AcidSlugShootingState {
        inline app::AcidSlugShootingState__Class** type_info() {
            static app::AcidSlugShootingState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AcidSlugShootingState__Class**)(modloader::win::memory::resolve_rva(0x04771390));
            }
            return cache;
        }
        inline app::AcidSlugShootingState__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugShootingState__Class>(type_info(), "", "AcidSlugShootingState");
        }
        inline app::AcidSlugShootingState* create() {
            return il2cpp::create_object<app::AcidSlugShootingState>(get_class());
        }
    } // namespace AcidSlugShootingState
} // namespace app::classes::types
