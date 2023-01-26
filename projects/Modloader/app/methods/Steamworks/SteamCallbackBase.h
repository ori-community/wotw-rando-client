#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CCallbackBaseVTable_RunCBDel.h>
#include <Modloader/app/structs/CCallbackBase.h>
#include <Modloader/app/structs/CCallbackBaseVTable_GetCallbackSizeBytesDel.h>
#include <Modloader/app/structs/CCallbackBaseVTable_RunCRDel.h>
#include <Modloader/app/structs/GCHandle.h>

namespace app::classes::Steamworks::SteamCallbackBase {
    IL2CPP_REGISTER_METHOD(0x027E3510, void*, BuildVTable, (app::CCallbackBaseVTable_RunCBDel * run_callback, app::CCallbackBaseVTable_RunCRDel* run_call_result, app::CCallbackBaseVTable_GetCallbackSizeBytesDel* get_callback_size_bytes))
    IL2CPP_REGISTER_METHOD(0x027E37C0, void, BuildCCallbackBase, (void* vtable_ptr, int32_t callback_identity, app::CCallbackBase** callback_base, app::GCHandle* callback_base_ptr))
} // namespace app::classes::Steamworks::SteamCallbackBase
