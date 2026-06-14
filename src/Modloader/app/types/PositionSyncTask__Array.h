#pragma once
#include <Modloader/app/structs/PositionSyncTask__Array.h>
#include <Modloader/app/structs/PositionSyncTask__Array__Array.h>
#include <Modloader/app/structs/PositionSyncTask__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionSyncTask__Array {
        inline app::PositionSyncTask__Array__Class** type_info() {
            static app::PositionSyncTask__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PositionSyncTask__Array__Class**)(modloader::win::memory::resolve_rva(0x04713BE0));
            }
            return cache;
        }
        inline app::PositionSyncTask__Array__Class* get_class() {
            return il2cpp::get_class<app::PositionSyncTask__Array__Class>(type_info(), "Moon.Wwise", "PositionSyncTask[]");
        }
        inline app::PositionSyncTask__Array* create() {
            return il2cpp::create_object<app::PositionSyncTask__Array>(get_class());
        }
        inline app::PositionSyncTask__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::PositionSyncTask__Array__Array>(get_class(), size);
        }
        inline app::PositionSyncTask__Array__Array* create_array(const std::vector<app::PositionSyncTask__Array*>& items) {
            return il2cpp::array_new<app::PositionSyncTask__Array__Array>(get_class(), items);
        }
    } // namespace PositionSyncTask__Array
} // namespace app::classes::types
