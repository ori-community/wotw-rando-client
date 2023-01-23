#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DropSlugLandState__Class.h>
#include <Modloader/app/structs/DropSlugLandState.h>

namespace app::classes::types {
    namespace DropSlugLandState {
        inline app::DropSlugLandState__Class** type_info = (app::DropSlugLandState__Class**)(modloader::win::memory::resolve_rva(0x04715A88));
        inline app::DropSlugLandState__Class* get_class() {
            return il2cpp::get_class<app::DropSlugLandState__Class>(type_info, "", "DropSlugLandState");
        }
        inline app::DropSlugLandState* create() {
            return il2cpp::create_object<app::DropSlugLandState>(get_class());
        }
    } // namespace DropSlugLandState
} // namespace app::classes::types
