#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeSetClassTypeToNullOnScheduleAttribute {
        namespace {
            inline app::NativeSetClassTypeToNullOnScheduleAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeSetClassTypeToNullOnScheduleAttribute__Class** type_info = &type_info_ref;
        inline app::NativeSetClassTypeToNullOnScheduleAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeSetClassTypeToNullOnScheduleAttribute__Class>(type_info, "Unity.Collections.LowLevel.Unsafe", "NativeSetClassTypeToNullOnScheduleAttribute");
        }
        inline app::NativeSetClassTypeToNullOnScheduleAttribute* create() {
            return il2cpp::create_object<app::NativeSetClassTypeToNullOnScheduleAttribute>(get_class());
        }
    } // namespace NativeSetClassTypeToNullOnScheduleAttribute
} // namespace app::classes::types
