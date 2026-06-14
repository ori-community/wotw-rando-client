#pragma once
#include <Modloader/app/structs/ICanvasElement__Array.h>
#include <Modloader/app/structs/ICanvasElement__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICanvasElement__Array {
        inline app::ICanvasElement__Array__Class** type_info() {
            static app::ICanvasElement__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ICanvasElement__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ICanvasElement__Array__Class* get_class() {
            return il2cpp::get_class<app::ICanvasElement__Array__Class>(type_info(), "UnityEngine.UI", "ICanvasElement[]");
        }
        inline app::ICanvasElement__Array* create() {
            return il2cpp::create_object<app::ICanvasElement__Array>(get_class());
        }
    } // namespace ICanvasElement__Array
} // namespace app::classes::types
