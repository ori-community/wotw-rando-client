#pragma once
#include <Modloader/app/structs/UIVertex__Array.h>
#include <Modloader/app/structs/UIVertex__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UIVertex__Array {
        inline app::UIVertex__Array__Class** type_info() {
            static app::UIVertex__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UIVertex__Array__Class**)(modloader::win::memory::resolve_rva(0x04713A10));
            }
            return cache;
        }
        inline app::UIVertex__Array__Class* get_class() {
            return il2cpp::get_class<app::UIVertex__Array__Class>(type_info(), "UnityEngine", "UIVertex[]");
        }
        inline app::UIVertex__Array* create() {
            return il2cpp::create_object<app::UIVertex__Array>(get_class());
        }
    } // namespace UIVertex__Array
} // namespace app::classes::types
