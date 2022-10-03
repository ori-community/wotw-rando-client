#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PositionSyncTask__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PositionSyncTask__Array__Class** type_info;
        inline app::PositionSyncTask__Array__Class* get_class() {
            return il2cpp::get_class<app::PositionSyncTask__Array__Class>(type_info, "Moon.Wwise", "PositionSyncTask[]");
        }
        inline app::PositionSyncTask__Array* create() {
            return il2cpp::create_object<app::PositionSyncTask__Array>(get_class());
        }
        inline app::PositionSyncTask__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::PositionSyncTask__Array__Array>(get_class(), size);
        }
    } // namespace PositionSyncTask__Array
} // namespace app::classes::types
