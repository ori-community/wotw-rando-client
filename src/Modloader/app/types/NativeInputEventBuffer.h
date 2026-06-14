#pragma once
#include <Modloader/app/structs/NativeInputEventBuffer.h>
#include <Modloader/app/structs/NativeInputEventBuffer__Boxed.h>
#include <Modloader/app/structs/NativeInputEventBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeInputEventBuffer {
        inline app::NativeInputEventBuffer__Class** type_info() {
            static app::NativeInputEventBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeInputEventBuffer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeInputEventBuffer__Class* get_class() {
            return il2cpp::get_class<app::NativeInputEventBuffer__Class>(type_info(), "UnityEngineInternal.Input", "NativeInputEventBuffer");
        }
        inline app::NativeInputEventBuffer* create() {
            return il2cpp::create_object<app::NativeInputEventBuffer>(get_class());
        }
        inline app::NativeInputEventBuffer__Boxed* box(app::NativeInputEventBuffer value) {
            return il2cpp::box_value<app::NativeInputEventBuffer__Boxed>(get_class(), value);
        }
    } // namespace NativeInputEventBuffer
} // namespace app::classes::types
