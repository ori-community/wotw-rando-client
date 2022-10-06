#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserDataRecord {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserDataRecord__Class** type_info;
        inline app::UserDataRecord__Class* get_class() {
            return il2cpp::get_class<app::UserDataRecord__Class>(type_info, "PlayFab.ClientModels", "UserDataRecord");
        }
        inline app::UserDataRecord* create() {
            return il2cpp::create_object<app::UserDataRecord>(get_class());
        }
        inline app::UserDataRecord__Array* create_array(int size) {
            return il2cpp::array_new<app::UserDataRecord__Array>(get_class(), size);
        }
        inline app::UserDataRecord__Array* create_array(const std::vector<app::UserDataRecord*>& items) {
            return il2cpp::array_new<app::UserDataRecord__Array>(get_class(), items);
        }
    } // namespace UserDataRecord
} // namespace app::classes::types
