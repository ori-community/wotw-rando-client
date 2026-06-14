#pragma once
#include <Modloader/app/structs/UnityEvent_Converter.h>
#include <Modloader/app/structs/UnityEvent_Converter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityEvent_Converter {
        inline app::UnityEvent_Converter__Class** type_info() {
            static app::UnityEvent_Converter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityEvent_Converter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityEvent_Converter__Class* get_class() {
            return il2cpp::get_class<app::UnityEvent_Converter__Class>(type_info(), "FullSerializer.Internal.Converters", "UnityEvent_Converter");
        }
        inline app::UnityEvent_Converter* create() {
            return il2cpp::create_object<app::UnityEvent_Converter>(get_class());
        }
    } // namespace UnityEvent_Converter
} // namespace app::classes::types
