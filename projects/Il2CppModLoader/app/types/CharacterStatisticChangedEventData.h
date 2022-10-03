#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterStatisticChangedEventData {
        namespace {
            app::CharacterStatisticChangedEventData__Class* type_info_ref = nullptr;
        }
        app::CharacterStatisticChangedEventData__Class** type_info = &type_info_ref;
        inline app::CharacterStatisticChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::CharacterStatisticChangedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "CharacterStatisticChangedEventData");
        }
        inline app::CharacterStatisticChangedEventData* create() {
            return il2cpp::create_object<app::CharacterStatisticChangedEventData>(get_class());
        }
    } // namespace CharacterStatisticChangedEventData
} // namespace app::classes::types
