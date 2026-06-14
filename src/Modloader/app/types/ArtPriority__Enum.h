#pragma once
#include <Modloader/app/structs/ArtPriority__Enum.h>
#include <Modloader/app/structs/ArtPriority__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtPriority__Enum {
        inline app::ArtPriority__Enum__Class** type_info() {
            static app::ArtPriority__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ArtPriority__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ArtPriority__Enum__Class* get_class() {
            return il2cpp::get_class<app::ArtPriority__Enum__Class>(type_info(), "Moon.EditorTools.SceneTracking", "ArtPriority");
        }
        inline app::ArtPriority__Enum* create() {
            return il2cpp::create_object<app::ArtPriority__Enum>(get_class());
        }
    } // namespace ArtPriority__Enum
} // namespace app::classes::types
