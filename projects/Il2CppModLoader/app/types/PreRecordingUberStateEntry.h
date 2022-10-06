#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreRecordingUberStateEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PreRecordingUberStateEntry__Class** type_info;
        inline app::PreRecordingUberStateEntry__Class* get_class() {
            return il2cpp::get_class<app::PreRecordingUberStateEntry__Class>(type_info, "", "PreRecordingUberStateEntry");
        }
        inline app::PreRecordingUberStateEntry* create() {
            return il2cpp::create_object<app::PreRecordingUberStateEntry>(get_class());
        }
        inline app::PreRecordingUberStateEntry__Boxed* box(app::PreRecordingUberStateEntry value) {
            return il2cpp::box_value<app::PreRecordingUberStateEntry__Boxed>(get_class(), value);
        }
        inline app::PreRecordingUberStateEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::PreRecordingUberStateEntry__Array>(get_class(), size);
        }
        inline app::PreRecordingUberStateEntry__Array* create_array(const std::vector<app::PreRecordingUberStateEntry__Boxed>& items) {
            return il2cpp::array_new<app::PreRecordingUberStateEntry__Array>(get_class(), items);
        }
    } // namespace PreRecordingUberStateEntry
} // namespace app::classes::types
