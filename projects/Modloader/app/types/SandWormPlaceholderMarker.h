#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormPlaceholderMarker {
        namespace {
            inline app::SandWormPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        inline app::SandWormPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::SandWormPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::SandWormPlaceholderMarker__Class>(type_info, "", "SandWormPlaceholderMarker");
        }
        inline app::SandWormPlaceholderMarker* create() {
            return il2cpp::create_object<app::SandWormPlaceholderMarker>(get_class());
        }
    } // namespace SandWormPlaceholderMarker
} // namespace app::classes::types
