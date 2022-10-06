#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharacterData__Class** type_info;
        inline app::CharacterData__Class* get_class() {
            return il2cpp::get_class<app::CharacterData__Class>(type_info, "", "CharacterData");
        }
        inline app::CharacterData* create() {
            return il2cpp::create_object<app::CharacterData>(get_class());
        }
        inline app::CharacterData__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterData__Array>(get_class(), size);
        }
        inline app::CharacterData__Array* create_array(const std::vector<app::CharacterData*>& items) {
            return il2cpp::array_new<app::CharacterData__Array>(get_class(), items);
        }
    } // namespace CharacterData
} // namespace app::classes::types
