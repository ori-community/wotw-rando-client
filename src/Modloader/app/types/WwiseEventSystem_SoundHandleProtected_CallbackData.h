#pragma once
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected_CallbackData.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected_CallbackData__Array.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected_CallbackData__Boxed.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected_CallbackData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseEventSystem_SoundHandleProtected_CallbackData {
        inline app::WwiseEventSystem_SoundHandleProtected_CallbackData__Class** type_info() {
            static app::WwiseEventSystem_SoundHandleProtected_CallbackData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WwiseEventSystem_SoundHandleProtected_CallbackData__Class**)(modloader::win::memory::resolve_rva(0x0474FCA0));
            }
            return cache;
        }
        inline app::WwiseEventSystem_SoundHandleProtected_CallbackData__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseEventSystem_SoundHandleProtected_CallbackData__Class>(type_info(), "Moon.Wwise", "WwiseEventSystem+SoundHandleProtected", "CallbackData");
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
        inline app::WwiseEventSystem_SoundHandleProtected_CallbackData__Array* create_array(const std::vector<app::WwiseEventSystem_SoundHandleProtected_CallbackData>& items) {
            return il2cpp::array_new<app::WwiseEventSystem_SoundHandleProtected_CallbackData__Array>(get_class(), items);
        }
    } // namespace WwiseEventSystem_SoundHandleProtected_CallbackData
} // namespace app::classes::types
