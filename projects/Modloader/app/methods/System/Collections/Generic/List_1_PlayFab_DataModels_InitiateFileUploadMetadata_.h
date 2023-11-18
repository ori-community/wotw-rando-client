#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InitiateFileUploadMetadata.h>
#include <Modloader/app/structs/List_1_PlayFab_DataModels_InitiateFileUploadMetadata_.h>

namespace app::classes::System::Collections::Generic::List_1_PlayFab_DataModels_InitiateFileUploadMetadata_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::InitiateFileUploadMetadata*, get_Item, (app::List_1_PlayFab_DataModels_InitiateFileUploadMetadata_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_PlayFab_DataModels_InitiateFileUploadMetadata_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_PlayFab_DataModels_InitiateFileUploadMetadata_ * this_ptr, app::InitiateFileUploadMetadata* item))
} // namespace app::classes::System::Collections::Generic::List_1_PlayFab_DataModels_InitiateFileUploadMetadata_
