#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SaveSlotsUI_StorageOperation.h>
#include <Modloader/app/structs/Action.h>

namespace app::classes::SaveSlotsUI_StorageOperation {
    IL2CPP_REGISTER_METHOD(0x009317D0, void, ctor, (app::SaveSlotsUI_StorageOperation * this_ptr, app::Action* request, app::Action* on_finished))
    IL2CPP_REGISTER_METHOD(0x009317E0, void, ExecuteOperation, (app::SaveSlotsUI_StorageOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00931810, void, RunFinishedCallback, (app::SaveSlotsUI_StorageOperation * this_ptr))
} // namespace app::classes::SaveSlotsUI_StorageOperation
