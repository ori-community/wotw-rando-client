#pragma once
#include <Modloader/app/structs/RectTransformUtility.h>
#include <Modloader/app/structs/RectTransformUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RectTransformUtility {
        inline app::RectTransformUtility__Class** type_info() {
            static app::RectTransformUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RectTransformUtility__Class**)(modloader::win::memory::resolve_rva(0x04772090));
            }
            return cache;
        }
        inline app::RectTransformUtility__Class* get_class() {
            return il2cpp::get_class<app::RectTransformUtility__Class>(type_info(), "UnityEngine", "RectTransformUtility");
        }
        inline app::RectTransformUtility* create() {
            return il2cpp::create_object<app::RectTransformUtility>(get_class());
        }
    } // namespace RectTransformUtility
} // namespace app::classes::types
