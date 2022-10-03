#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSlotInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SaveSlotInfo__Class** type_info;
        inline app::SaveSlotInfo__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotInfo__Class>(type_info, "", "SaveSlotInfo");
        }
        inline app::SaveSlotInfo* create() {
            return il2cpp::create_object<app::SaveSlotInfo>(get_class());
        }
        inline app::SaveSlotInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SaveSlotInfo__Array>(get_class(), size);
        }
    } // namespace SaveSlotInfo
} // namespace app::classes::types
