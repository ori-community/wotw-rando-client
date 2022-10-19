#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PositionSyncTask__Array {
        inline app::PositionSyncTask__Array__Class** type_info = (app::PositionSyncTask__Array__Class**)(modloader::win::memory::resolve_rva(0x04713BE0));
        inline app::PositionSyncTask__Array__Class* get_class() {
            return il2cpp::get_class<app::PositionSyncTask__Array__Class>(type_info, "Moon.Wwise", "PositionSyncTask[]");
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
