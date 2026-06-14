#pragma once
#include <Modloader/app/structs/NativeInputEventBufferPtr.h>
#include <Modloader/app/structs/NativeInputEventBufferPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeInputEventBufferPtr {
        inline app::NativeInputEventBufferPtr__Class** type_info() {
            static app::NativeInputEventBufferPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeInputEventBufferPtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeInputEventBufferPtr__Class* get_class() {
            return il2cpp::get_class<app::NativeInputEventBufferPtr__Class>(type_info(), "UnityEngineInternal.Input", "NativeInputEventBuffer*");
        }
        inline app::NativeInputEventBufferPtr* create() {
            return il2cpp::create_object<app::NativeInputEventBufferPtr>(get_class());
        }
    } // namespace NativeInputEventBufferPtr
} // namespace app::classes::types
