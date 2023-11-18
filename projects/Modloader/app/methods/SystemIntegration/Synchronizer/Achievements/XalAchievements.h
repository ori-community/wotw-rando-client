#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_String_.h>
#include <Modloader/app/structs/CacheData.h>
#include <Modloader/app/structs/CacheData__Array.h>
#include <Modloader/app/structs/HttpMethod.h>
#include <Modloader/app/structs/IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnityWebRequest.h>
#include <Modloader/app/structs/XalAchievements.h>
#include <Modloader/app/structs/XalUserGetTokenAndSignatureArgs.h>

namespace app::classes::SystemIntegration::Synchronizer::Achievements::XalAchievements {
    IL2CPP_REGISTER_METHOD(0x0052F860, app::String*, get_Name, (app::XalAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsSynchronising, (app::XalAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_IsSynchronising, (app::XalAchievements * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_HasSynchronised, (app::XalAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C660, void, set_HasSynchronised, (app::XalAchievements * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0052F8E0, bool, get_Disable, ())
    IL2CPP_REGISTER_METHOD(0x0052F960, void, set_Disable, (bool value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::CacheData__Array*, AwardedOnServer, (app::XalAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052F9F0, void, AwardOnServer, (app::XalAchievements * this_ptr, app::CacheData* data))
    IL2CPP_REGISTER_METHOD(0x00530520, void, AchievementSetComplete, (app::XalAchievements * this_ptr, app::String* json, app::CacheData* data))
    IL2CPP_REGISTER_METHOD(0x00530790, void, UpdateFromServer, (app::XalAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00530CF0, void, AchievementGetComplete, (app::XalAchievements * this_ptr, app::String* json))
    IL2CPP_REGISTER_METHOD(0x00531180, void, HeaderAndArgsForGetAchievements, (app::String * full_address, app::String* method_1, app::String* body, app::List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_** headers, app::XalUserGetTokenAndSignatureArgs* args))
    IL2CPP_REGISTER_METHOD(0x00531660, void, OnError, (app::XalAchievements * this_ptr, app::Object* error))
    IL2CPP_REGISTER_METHOD(0x00531670, void, CallMethodWith, (app::String * full_address, app::HttpMethod* method_1, app::String* body, app::IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_* headers, app::String* signature, app::String* token, app::Action_1_String_* on_complete, app::Action_1_String_* on_error))
    IL2CPP_REGISTER_METHOD(0x00531C80, void, Perform, (app::UnityWebRequest * request, app::IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_* headers, app::String* signature, app::String* token, app::Action_1_String_* on_complete, app::Action_1_String_* on_error))
    IL2CPP_REGISTER_METHOD(0x005320A0, app::IEnumerator*, RunRequest, (app::UnityWebRequest * web_request, app::Action* on_complete))
    IL2CPP_REGISTER_METHOD(0x00532200, void, AddToClient, (app::UnityWebRequest * form, app::IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_* headers))
    IL2CPP_REGISTER_METHOD(0x00532410, void, Clear, (app::XalAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005324A0, void, ctor, (app::XalAchievements * this_ptr))
} // namespace app::classes::SystemIntegration::Synchronizer::Achievements::XalAchievements
