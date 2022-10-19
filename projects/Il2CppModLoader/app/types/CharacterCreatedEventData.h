#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterCreatedEventData {
        namespace {
            inline app::CharacterCreatedEventData__Class* type_info_ref = nullptr;
        }
        inline app::CharacterCreatedEventData__Class** type_info = &type_info_ref;
        inline app::CharacterCreatedEventData__Class* get_class() {
            return il2cpp::get_class<app::CharacterCreatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "CharacterCreatedEventData");
        }
        inline app::CharacterCreatedEventData* create() {
            return il2cpp::create_object<app::CharacterCreatedEventData>(get_class());
        }
    } // namespace CharacterCreatedEventData
} // namespace app::classes::types
