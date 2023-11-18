#pragma once
#include <Modloader/app/structs/NativeSetClassTypeToNullOnScheduleAttribute.h>
#include <Modloader/app/structs/NativeSetClassTypeToNullOnScheduleAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeSetClassTypeToNullOnScheduleAttribute {
        inline app::NativeSetClassTypeToNullOnScheduleAttribute__Class** type_info() {
            static app::NativeSetClassTypeToNullOnScheduleAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeSetClassTypeToNullOnScheduleAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeSetClassTypeToNullOnScheduleAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeSetClassTypeToNullOnScheduleAttribute__Class>(type_info(), "Unity.Collections.LowLevel.Unsafe", "NativeSetClassTypeToNullOnScheduleAttribute");
        }
        inline app::NativeSetClassTypeToNullOnScheduleAttribute* create() {
            return il2cpp::create_object<app::NativeSetClassTypeToNullOnScheduleAttribute>(get_class());
        }
    } // namespace NativeSetClassTypeToNullOnScheduleAttribute
} // namespace app::classes::types
