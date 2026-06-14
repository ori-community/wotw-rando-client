#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleSavedSurveyEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleSavedSurveyEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TitleSavedSurveyEventData* this_ptr)
}
