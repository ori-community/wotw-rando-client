#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterStatisticDeletedEventData {
        namespace {
            inline app::CharacterStatisticDeletedEventData__Class* type_info_ref = nullptr;
        }
        inline app::CharacterStatisticDeletedEventData__Class** type_info = &type_info_ref;
        inline app::CharacterStatisticDeletedEventData__Class* get_class() {
            return il2cpp::get_class<app::CharacterStatisticDeletedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "CharacterStatisticDeletedEventData");
        }
        inline app::CharacterStatisticDeletedEventData* create() {
            return il2cpp::create_object<app::CharacterStatisticDeletedEventData>(get_class());
        }
    } // namespace CharacterStatisticDeletedEventData
} // namespace app::classes::types
