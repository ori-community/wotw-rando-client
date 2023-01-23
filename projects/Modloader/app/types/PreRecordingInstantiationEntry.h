#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PreRecordingInstantiationEntry__Class.h>
#include <Modloader/app/structs/PreRecordingInstantiationEntry.h>
#include <Modloader/app/structs/PreRecordingInstantiationEntry__Boxed.h>
#include <Modloader/app/structs/PreRecordingInstantiationEntry__Array.h>

namespace app::classes::types {
    namespace PreRecordingInstantiationEntry {
        inline app::PreRecordingInstantiationEntry__Class** type_info = (app::PreRecordingInstantiationEntry__Class**)(modloader::win::memory::resolve_rva(0x047062C8));
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
        inline app::PreRecordingInstantiationEntry__Array* create_array(const std::vector<app::PreRecordingInstantiationEntry>& items) {
            return il2cpp::array_new<app::PreRecordingInstantiationEntry__Array>(get_class(), items);
        }
    } // namespace PreRecordingInstantiationEntry
} // namespace app::classes::types
