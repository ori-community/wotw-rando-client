#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TitleProfileViewConstraintsChangedEventData {
        namespace {
            inline app::TitleProfileViewConstraintsChangedEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleProfileViewConstraintsChangedEventData__Class** type_info = &type_info_ref;
        inline app::TitleProfileViewConstraintsChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleProfileViewConstraintsChangedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleProfileViewConstraintsChangedEventData");
        }
        inline app::TitleProfileViewConstraintsChangedEventData* create() {
            return il2cpp::create_object<app::TitleProfileViewConstraintsChangedEventData>(get_class());
        }
    } // namespace TitleProfileViewConstraintsChangedEventData
} // namespace app::classes::types
