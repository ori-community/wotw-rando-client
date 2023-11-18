#pragma once
#include <Modloader/app/structs/CanvasUpdate__Enum.h>
#include <Modloader/app/structs/CanvasUpdate__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CanvasUpdate__Enum {
        inline app::CanvasUpdate__Enum__Class** type_info() {
            static app::CanvasUpdate__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CanvasUpdate__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CanvasUpdate__Enum__Class* get_class() {
            return il2cpp::get_class<app::CanvasUpdate__Enum__Class>(type_info(), "UnityEngine.UI", "CanvasUpdate");
        }
        inline app::CanvasUpdate__Enum* create() {
            return il2cpp::create_object<app::CanvasUpdate__Enum>(get_class());
        }
    } // namespace CanvasUpdate__Enum
} // namespace app::classes::types
