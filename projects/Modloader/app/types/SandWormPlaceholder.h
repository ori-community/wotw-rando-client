#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormPlaceholder {
        namespace {
            inline app::SandWormPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::SandWormPlaceholder__Class** type_info = &type_info_ref;
        inline app::SandWormPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SandWormPlaceholder__Class>(type_info, "", "SandWormPlaceholder");
        }
        inline app::SandWormPlaceholder* create() {
            return il2cpp::create_object<app::SandWormPlaceholder>(get_class());
        }
    } // namespace SandWormPlaceholder
} // namespace app::classes::types
