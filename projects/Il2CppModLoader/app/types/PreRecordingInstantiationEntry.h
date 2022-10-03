#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreRecordingInstantiationEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PreRecordingInstantiationEntry__Class** type_info;
        inline app::PreRecordingInstantiationEntry__Class* get_class() {
            return il2cpp::get_class<app::PreRecordingInstantiationEntry__Class>(type_info, "", "PreRecordingInstantiationEntry");
        }
        inline app::PreRecordingInstantiationEntry* create() {
            return il2cpp::create_object<app::PreRecordingInstantiationEntry>(get_class());
        }
        inline app::PreRecordingInstantiationEntry__Boxed* box(app::PreRecordingInstantiationEntry value) {
            return il2cpp::box_value<app::PreRecordingInstantiationEntry__Boxed>(get_class(), value);
        }
        inline app::PreRecordingInstantiationEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::PreRecordingInstantiationEntry__Array>(get_class(), size);
        }
    } // namespace PreRecordingInstantiationEntry
} // namespace app::classes::types
