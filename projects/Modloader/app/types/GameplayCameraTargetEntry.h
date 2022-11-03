#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameplayCameraTargetEntry {
        inline app::GameplayCameraTargetEntry__Class** type_info = (app::GameplayCameraTargetEntry__Class**)(modloader::win::memory::resolve_rva(0x04760DA8));
        inline app::GameplayCameraTargetEntry__Class* get_class() {
            return il2cpp::get_class<app::GameplayCameraTargetEntry__Class>(type_info, "", "GameplayCameraTargetEntry");
        }
        inline app::GameplayCameraTargetEntry* create() {
            return il2cpp::create_object<app::GameplayCameraTargetEntry>(get_class());
        }
        inline app::GameplayCameraTargetEntry__Boxed* box(app::GameplayCameraTargetEntry value) {
            return il2cpp::box_value<app::GameplayCameraTargetEntry__Boxed>(get_class(), value);
        }
        inline app::GameplayCameraTargetEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::GameplayCameraTargetEntry__Array>(get_class(), size);
        }
        inline app::GameplayCameraTargetEntry__Array* create_array(const std::vector<app::GameplayCameraTargetEntry>& items) {
            return il2cpp::array_new<app::GameplayCameraTargetEntry__Array>(get_class(), items);
        }
    } // namespace GameplayCameraTargetEntry
} // namespace app::classes::types
