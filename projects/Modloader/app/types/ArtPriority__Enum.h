#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArtPriority__Enum {
        namespace {
            inline app::ArtPriority__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ArtPriority__Enum__Class** type_info = &type_info_ref;
        inline app::ArtPriority__Enum__Class* get_class() {
            return il2cpp::get_class<app::ArtPriority__Enum__Class>(type_info, "Moon.EditorTools.SceneTracking", "ArtPriority");
        }
        inline app::ArtPriority__Enum* create() {
            return il2cpp::create_object<app::ArtPriority__Enum>(get_class());
        }
    } // namespace ArtPriority__Enum
} // namespace app::classes::types
