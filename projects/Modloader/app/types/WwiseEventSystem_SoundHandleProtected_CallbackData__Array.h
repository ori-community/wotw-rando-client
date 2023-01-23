#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected_CallbackData__Array__Class.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected_CallbackData__Array.h>

namespace app::classes::types {
    namespace WwiseEventSystem_SoundHandleProtected_CallbackData__Array {
        namespace {
            inline app::WwiseEventSystem_SoundHandleProtected_CallbackData__Array__Class* type_info_ref = nullptr;
        }
        inline app::WwiseEventSystem_SoundHandleProtected_CallbackData__Array__Class** type_info = &type_info_ref;
        inline app::WwiseEventSystem_SoundHandleProtected_CallbackData__Array__Class* get_class() {
            return il2cpp::get_class<app::WwiseEventSystem_SoundHandleProtected_CallbackData__Array__Class>(type_info, "Moon.Wwise", "WwiseEventSystem+SoundHandleProtected+CallbackData[]");
        }
        inline app::WwiseEventSystem_SoundHandleProtected_CallbackData__Array* create() {
            return il2cpp::create_object<app::WwiseEventSystem_SoundHandleProtected_CallbackData__Array>(get_class());
        }
    } // namespace WwiseEventSystem_SoundHandleProtected_CallbackData__Array
} // namespace app::classes::types
