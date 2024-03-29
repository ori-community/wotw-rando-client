#pragma once
#include <Modloader/app/structs/DropSlugIdleState.h>
#include <Modloader/app/structs/DropSlugIdleState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugIdleState {
        inline app::DropSlugIdleState__Class** type_info() {
            static app::DropSlugIdleState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DropSlugIdleState__Class**)(modloader::win::memory::resolve_rva(0x0472A818));
            }
            return cache;
        }
        inline app::DropSlugIdleState__Class* get_class() {
            return il2cpp::get_class<app::DropSlugIdleState__Class>(type_info(), "", "DropSlugIdleState");
        }
        inline app::DropSlugIdleState* create() {
            return il2cpp::create_object<app::DropSlugIdleState>(get_class());
        }
    } // namespace DropSlugIdleState
} // namespace app::classes::types
