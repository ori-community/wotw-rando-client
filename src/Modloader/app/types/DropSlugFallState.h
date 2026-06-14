#pragma once
#include <Modloader/app/structs/DropSlugFallState.h>
#include <Modloader/app/structs/DropSlugFallState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugFallState {
        inline app::DropSlugFallState__Class** type_info() {
            static app::DropSlugFallState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DropSlugFallState__Class**)(modloader::win::memory::resolve_rva(0x04789100));
            }
            return cache;
        }
        inline app::DropSlugFallState__Class* get_class() {
            return il2cpp::get_class<app::DropSlugFallState__Class>(type_info(), "", "DropSlugFallState");
        }
        inline app::DropSlugFallState* create() {
            return il2cpp::create_object<app::DropSlugFallState>(get_class());
        }
    } // namespace DropSlugFallState
} // namespace app::classes::types
