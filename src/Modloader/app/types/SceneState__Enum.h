#pragma once
#include <Modloader/app/structs/SceneState__Enum.h>
#include <Modloader/app/structs/SceneState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneState__Enum {
        inline app::SceneState__Enum__Class** type_info() {
            static app::SceneState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneState__Enum__Class**)(modloader::win::memory::resolve_rva(0x047856F8));
            }
            return cache;
        }
        inline app::SceneState__Enum__Class* get_class() {
            return il2cpp::get_class<app::SceneState__Enum__Class>(type_info(), "", "SceneState");
        }
        inline app::SceneState__Enum* create() {
            return il2cpp::create_object<app::SceneState__Enum>(get_class());
        }
    } // namespace SceneState__Enum
} // namespace app::classes::types
