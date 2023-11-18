#pragma once
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected_CallbackData__Array.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected_CallbackData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseEventSystem_SoundHandleProtected_CallbackData__Array {
        inline app::WwiseEventSystem_SoundHandleProtected_CallbackData__Array__Class** type_info() {
            static app::WwiseEventSystem_SoundHandleProtected_CallbackData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WwiseEventSystem_SoundHandleProtected_CallbackData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WwiseEventSystem_SoundHandleProtected_CallbackData__Array__Class* get_class() {
            return il2cpp::get_class<app::WwiseEventSystem_SoundHandleProtected_CallbackData__Array__Class>(type_info(), "Moon.Wwise", "WwiseEventSystem+SoundHandleProtected+CallbackData[]");
        }
        inline app::WwiseEventSystem_SoundHandleProtected_CallbackData__Array* create() {
            return il2cpp::create_object<app::WwiseEventSystem_SoundHandleProtected_CallbackData__Array>(get_class());
        }
    } // namespace WwiseEventSystem_SoundHandleProtected_CallbackData__Array
} // namespace app::classes::types
