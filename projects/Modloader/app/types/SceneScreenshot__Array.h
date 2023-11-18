#pragma once
#include <Modloader/app/structs/SceneScreenshot__Array.h>
#include <Modloader/app/structs/SceneScreenshot__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneScreenshot__Array {
        inline app::SceneScreenshot__Array__Class** type_info() {
            static app::SceneScreenshot__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneScreenshot__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneScreenshot__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneScreenshot__Array__Class>(type_info(), "", "SceneScreenshot[]");
        }
        inline app::SceneScreenshot__Array* create() {
            return il2cpp::create_object<app::SceneScreenshot__Array>(get_class());
        }
    } // namespace SceneScreenshot__Array
} // namespace app::classes::types
