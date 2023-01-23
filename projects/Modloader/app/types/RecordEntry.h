#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RecordEntry__Class.h>
#include <Modloader/app/structs/RecordEntry.h>
#include <Modloader/app/structs/RecordEntry__Array.h>

namespace app::classes::types {
    namespace RecordEntry {
        namespace {
            inline app::RecordEntry__Class* type_info_ref = nullptr;
        }
        inline app::RecordEntry__Class** type_info = &type_info_ref;
        inline app::RecordEntry__Class* get_class() {
            return il2cpp::get_class<app::RecordEntry__Class>(type_info, "PhysicsDebugTools", "RecordEntry");
        }
        inline app::RecordEntry* create() {
            return il2cpp::create_object<app::RecordEntry>(get_class());
        }
        inline app::RecordEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::RecordEntry__Array>(get_class(), size);
        }
        inline app::RecordEntry__Array* create_array(const std::vector<app::RecordEntry*>& items) {
            return il2cpp::array_new<app::RecordEntry__Array>(get_class(), items);
        }
    } // namespace RecordEntry
} // namespace app::classes::types
