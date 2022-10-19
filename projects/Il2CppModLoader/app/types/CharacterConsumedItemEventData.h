#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterConsumedItemEventData {
        namespace {
            inline app::CharacterConsumedItemEventData__Class* type_info_ref = nullptr;
        }
        inline app::CharacterConsumedItemEventData__Class** type_info = &type_info_ref;
        inline app::CharacterConsumedItemEventData__Class* get_class() {
            return il2cpp::get_class<app::CharacterConsumedItemEventData__Class>(type_info, "PlayFab.PlayStreamModels", "CharacterConsumedItemEventData");
        }
        inline app::CharacterConsumedItemEventData* create() {
            return il2cpp::create_object<app::CharacterConsumedItemEventData>(get_class());
        }
    } // namespace CharacterConsumedItemEventData
} // namespace app::classes::types
