#pragma once
#include <Modloader/app/structs/TitleSavedSurveyEventData.h>
#include <Modloader/app/structs/TitleSavedSurveyEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleSavedSurveyEventData {
        inline app::TitleSavedSurveyEventData__Class** type_info() {
            static app::TitleSavedSurveyEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleSavedSurveyEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleSavedSurveyEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleSavedSurveyEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleSavedSurveyEventData");
        }
        inline app::TitleSavedSurveyEventData* create() {
            return il2cpp::create_object<app::TitleSavedSurveyEventData>(get_class());
        }
    } // namespace TitleSavedSurveyEventData
} // namespace app::classes::types
