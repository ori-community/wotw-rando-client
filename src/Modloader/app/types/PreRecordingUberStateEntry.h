#pragma once
#include <Modloader/app/structs/PreRecordingUberStateEntry.h>
#include <Modloader/app/structs/PreRecordingUberStateEntry__Array.h>
#include <Modloader/app/structs/PreRecordingUberStateEntry__Boxed.h>
#include <Modloader/app/structs/PreRecordingUberStateEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreRecordingUberStateEntry {
        inline app::PreRecordingUberStateEntry__Class** type_info() {
            static app::PreRecordingUberStateEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PreRecordingUberStateEntry__Class**)(modloader::win::memory::resolve_rva(0x0475C220));
            }
            return cache;
        }
        inline app::PreRecordingUberStateEntry__Class* get_class() {
            return il2cpp::get_class<app::PreRecordingUberStateEntry__Class>(type_info(), "", "PreRecordingUberStateEntry");
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
