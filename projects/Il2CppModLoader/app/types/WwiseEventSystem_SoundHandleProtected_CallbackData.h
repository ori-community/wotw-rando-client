#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseEventSystem_SoundHandleProtected_CallbackData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WwiseEventSystem_SoundHandleProtected_CallbackData__Class** type_info;
        inline app::WwiseEventSystem_SoundHandleProtected_CallbackData__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseEventSystem_SoundHandleProtected_CallbackData__Class>(type_info, "Moon.Wwise", "WwiseEventSystem+SoundHandleProtected", "CallbackData");
        }
        inline app::WwiseEventSystem_SoundHandleProtected_CallbackData* create() {
            return il2cpp::create_object<app::WwiseEventSystem_SoundHandleProtected_CallbackData>(get_class());
        }
        inline app::WwiseEventSystem_SoundHandleProtected_CallbackData__Boxed* box(app::WwiseEventSystem_SoundHandleProtected_CallbackData value) {
            return il2cpp::box_value<app::WwiseEventSystem_SoundHandleProtected_CallbackData__Boxed>(get_class(), value);
        }
        inline app::WwiseEventSystem_SoundHandleProtected_CallbackData__Array* create_array(int size) {
            return il2cpp::array_new<app::WwiseEventSystem_SoundHandleProtected_CallbackData__Array>(get_class(), size);
        }
    } // namespace WwiseEventSystem_SoundHandleProtected_CallbackData
} // namespace app::classes::types
