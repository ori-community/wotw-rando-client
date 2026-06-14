#pragma once
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/RectTransform__Array.h>
#include <Modloader/app/structs/RectTransform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RectTransform {
        inline app::RectTransform__Class** type_info() {
            static app::RectTransform__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RectTransform__Class**)(modloader::win::memory::resolve_rva(0x047725C8));
            }
            return cache;
        }
        inline app::RectTransform__Class* get_class() {
            return il2cpp::get_class<app::RectTransform__Class>(type_info(), "UnityEngine", "RectTransform");
        }
        inline app::RectTransform* create() {
            return il2cpp::create_object<app::RectTransform>(get_class());
        }
        inline app::RectTransform__Array* create_array(int size) {
            return il2cpp::array_new<app::RectTransform__Array>(get_class(), size);
        }
        inline app::RectTransform__Array* create_array(const std::vector<app::RectTransform*>& items) {
            return il2cpp::array_new<app::RectTransform__Array>(get_class(), items);
        }
    } // namespace RectTransform
} // namespace app::classes::types
