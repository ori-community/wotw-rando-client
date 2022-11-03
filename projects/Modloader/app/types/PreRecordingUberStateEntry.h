#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PreRecordingUberStateEntry {
        inline app::PreRecordingUberStateEntry__Class** type_info = (app::PreRecordingUberStateEntry__Class**)(modloader::win::memory::resolve_rva(0x0475C220));
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
        inline app::PreRecordingUberStateEntry__Array* create_array(const std::vector<app::PreRecordingUberStateEntry>& items) {
            return il2cpp::array_new<app::PreRecordingUberStateEntry__Array>(get_class(), items);
        }
    } // namespace PreRecordingUberStateEntry
} // namespace app::classes::types
