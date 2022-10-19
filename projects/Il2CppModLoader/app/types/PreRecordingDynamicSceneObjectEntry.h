#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PreRecordingDynamicSceneObjectEntry {
        inline app::PreRecordingDynamicSceneObjectEntry__Class** type_info = (app::PreRecordingDynamicSceneObjectEntry__Class**)(modloader::win::memory::resolve_rva(0x04795AB0));
        inline app::PreRecordingDynamicSceneObjectEntry__Class* get_class() {
            return il2cpp::get_class<app::PreRecordingDynamicSceneObjectEntry__Class>(type_info, "", "PreRecordingDynamicSceneObjectEntry");
        }
        inline app::PreRecordingDynamicSceneObjectEntry* create() {
            return il2cpp::create_object<app::PreRecordingDynamicSceneObjectEntry>(get_class());
        }
        inline app::PreRecordingDynamicSceneObjectEntry__Boxed* box(app::PreRecordingDynamicSceneObjectEntry value) {
            return il2cpp::box_value<app::PreRecordingDynamicSceneObjectEntry__Boxed>(get_class(), value);
        }
        inline app::PreRecordingDynamicSceneObjectEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::PreRecordingDynamicSceneObjectEntry__Array>(get_class(), size);
        }
        inline app::PreRecordingDynamicSceneObjectEntry__Array* create_array(const std::vector<app::PreRecordingDynamicSceneObjectEntry>& items) {
            return il2cpp::array_new<app::PreRecordingDynamicSceneObjectEntry__Array>(get_class(), items);
        }
    } // namespace PreRecordingDynamicSceneObjectEntry
} // namespace app::classes::types
