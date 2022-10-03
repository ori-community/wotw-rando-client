#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PositionSyncTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PositionSyncTask__Class** type_info;
        inline app::PositionSyncTask__Class* get_class() {
            return il2cpp::get_class<app::PositionSyncTask__Class>(type_info, "Moon.Wwise", "PositionSyncTask");
        }
        inline app::PositionSyncTask* create() {
            return il2cpp::create_object<app::PositionSyncTask>(get_class());
        }
        inline app::PositionSyncTask__Array* create_array(int size) {
            return il2cpp::array_new<app::PositionSyncTask__Array>(get_class(), size);
        }
    } // namespace PositionSyncTask
} // namespace app::classes::types
