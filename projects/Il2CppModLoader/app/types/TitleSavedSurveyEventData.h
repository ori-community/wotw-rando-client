#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleSavedSurveyEventData {
        namespace {
            app::TitleSavedSurveyEventData__Class* type_info_ref = nullptr;
        }
        app::TitleSavedSurveyEventData__Class** type_info = &type_info_ref;
        inline app::TitleSavedSurveyEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleSavedSurveyEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleSavedSurveyEventData");
        }
        inline app::TitleSavedSurveyEventData* create() {
            return il2cpp::create_object<app::TitleSavedSurveyEventData>(get_class());
        }
    } // namespace TitleSavedSurveyEventData
} // namespace app::classes::types
