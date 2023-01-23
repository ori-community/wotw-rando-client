#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/CsEvent.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_Ingest_.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_Protocol_.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_User_.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_Device_.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_Os_.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_App_.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_Utc_.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_Xbl_.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_Javascript_.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_Receipts_.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_Net_.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_Sdk_.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_Loc_.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_Cloud_.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_Data_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>

namespace app::classes::Microsoft::Applications::Events::DataModels::CsEvent {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_ver, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ver, (app::CsEvent * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_name, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_name, (app::CsEvent * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, int64_t, get_time, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_time, (app::CsEvent * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FBB20, double, get_popSample, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB30, void, set_popSample, (app::CsEvent * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_iKey, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_iKey, (app::CsEvent * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, int64_t, get_flags, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_flags, (app::CsEvent * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_cV, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_cV, (app::CsEvent * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::List_1_Microsoft_Applications_Events_DataModels_Ingest_*, get_extIngest, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_extIngest, (app::CsEvent * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_Ingest_* value))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::List_1_Microsoft_Applications_Events_DataModels_Protocol_*, get_extProtocol, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_extProtocol, (app::CsEvent * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_Protocol_* value))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::List_1_Microsoft_Applications_Events_DataModels_User_*, get_extUser, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_extUser, (app::CsEvent * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_User_* value))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::List_1_Microsoft_Applications_Events_DataModels_Device_*, get_extDevice, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_extDevice, (app::CsEvent * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_Device_* value))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::List_1_Microsoft_Applications_Events_DataModels_Os_*, get_extOs, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_extOs, (app::CsEvent * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_Os_* value))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::List_1_Microsoft_Applications_Events_DataModels_App_*, get_extApp, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_extApp, (app::CsEvent * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_App_* value))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::List_1_Microsoft_Applications_Events_DataModels_Utc_*, get_extUtc, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_extUtc, (app::CsEvent * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_Utc_* value))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::List_1_Microsoft_Applications_Events_DataModels_Xbl_*, get_extXbl, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_extXbl, (app::CsEvent * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_Xbl_* value))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::List_1_Microsoft_Applications_Events_DataModels_Javascript_*, get_extJavascript, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_extJavascript, (app::CsEvent * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_Javascript_* value))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::List_1_Microsoft_Applications_Events_DataModels_Receipts_*, get_extReceipts, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_extReceipts, (app::CsEvent * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_Receipts_* value))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::List_1_Microsoft_Applications_Events_DataModels_Net_*, get_extNet, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_extNet, (app::CsEvent * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_Net_* value))
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::List_1_Microsoft_Applications_Events_DataModels_Sdk_*, get_extSdk, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_extSdk, (app::CsEvent * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_Sdk_* value))
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::List_1_Microsoft_Applications_Events_DataModels_Loc_*, get_extLoc, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_extLoc, (app::CsEvent * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_Loc_* value))
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::List_1_Microsoft_Applications_Events_DataModels_Cloud_*, get_extCloud, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCD0, void, set_extCloud, (app::CsEvent * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_Cloud_* value))
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::List_1_Microsoft_Applications_Events_DataModels_Data_*, get_ext, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_ext, (app::CsEvent * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_Data_* value))
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::Dictionary_2_System_String_System_String_*, get_tags, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_tags, (app::CsEvent * this_ptr, app::Dictionary_2_System_String_System_String_* value))
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::String*, get_baseType, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD30, void, set_baseType, (app::CsEvent * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::List_1_Microsoft_Applications_Events_DataModels_Data_*, get_baseData, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD50, void, set_baseData, (app::CsEvent * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_Data_* value))
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::List_1_Microsoft_Applications_Events_DataModels_Data_*, get_data, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD70, void, set_data, (app::CsEvent * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_Data_* value))
    IL2CPP_REGISTER_METHOD(0x002FBD80, void, ctor_1, (app::CsEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBE10, void, ctor_2, (app::CsEvent * this_ptr, app::String* full_name, app::String* name))
    IL2CPP_REGISTER_METHOD(0x002FBFB0, void, Reset, (app::CsEvent * this_ptr))
} // namespace app::classes::Microsoft::Applications::Events::DataModels::CsEvent
