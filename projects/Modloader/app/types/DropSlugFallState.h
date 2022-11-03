#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DropSlugFallState {
        inline app::DropSlugFallState__Class** type_info = (app::DropSlugFallState__Class**)(modloader::win::memory::resolve_rva(0x04789100));
        inline app::DropSlugFallState__Class* get_class() {
            return il2cpp::get_class<app::DropSlugFallState__Class>(type_info, "", "DropSlugFallState");
        }
        inline app::DropSlugFallState* create() {
            return il2cpp::create_object<app::DropSlugFallState>(get_class());
        }
    } // namespace DropSlugFallState
} // namespace app::classes::types
