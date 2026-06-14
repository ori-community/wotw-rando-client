#pragma once
#include <Modloader/app/structs/DropSlugThrownState.h>
#include <Modloader/app/structs/DropSlugThrownState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugThrownState {
        inline app::DropSlugThrownState__Class** type_info() {
            static app::DropSlugThrownState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DropSlugThrownState__Class**)(modloader::win::memory::resolve_rva(0x04778EC8));
            }
            return cache;
        }
        inline app::DropSlugThrownState__Class* get_class() {
            return il2cpp::get_class<app::DropSlugThrownState__Class>(type_info(), "", "DropSlugThrownState");
        }
        inline app::DropSlugThrownState* create() {
            return il2cpp::create_object<app::DropSlugThrownState>(get_class());
        }
    } // namespace DropSlugThrownState
} // namespace app::classes::types
