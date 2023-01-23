#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DropSlugState__Class.h>
#include <Modloader/app/structs/DropSlugState.h>

namespace app::classes::types {
    namespace DropSlugState {
        namespace {
            inline app::DropSlugState__Class* type_info_ref = nullptr;
        }
        inline app::DropSlugState__Class** type_info = &type_info_ref;
        inline app::DropSlugState__Class* get_class() {
            return il2cpp::get_class<app::DropSlugState__Class>(type_info, "", "DropSlugState");
        }
        inline app::DropSlugState* create() {
            return il2cpp::create_object<app::DropSlugState>(get_class());
        }
    } // namespace DropSlugState
} // namespace app::classes::types
