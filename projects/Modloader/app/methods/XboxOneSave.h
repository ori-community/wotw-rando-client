#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Queue_1_System_Action_.h>
#include <Modloader/app/structs/Queue_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_1_System_Boolean_.h>
#include <Modloader/app/structs/Task_1_System_Byte_.h>
#include <Modloader/app/structs/Task_1_System_Collections_Generic_IEnumerable_1_.h>
#include <Modloader/app/structs/Tuple_2_String_Byte___Array.h>
#include <Modloader/app/structs/XboxOneSave.h>

namespace app::classes::XboxOneSave {
    IL2CPP_REGISTER_METHOD(0x01C598B0, app::XboxOneSave*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSlotsAllQueried, )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, SaveGameAvailableInSlot, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01C59950, bool, DeleteSaveGame, int32_t index, int32_t backup_index)
    IL2CPP_REGISTER_METHOD(0x01C59A90, app::Task*, Delete, app::String* file)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SaveGameAvailable, )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SaveGameQueried, )
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Byte__Array*, SaveGameData_1, int32_t slot, int32_t backup)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Byte__Array*, SaveGameData_2, app::String* buffer_name)
    IL2CPP_REGISTER_METHOD(0x01C59B20, bool, get_EnableSave, )
    IL2CPP_REGISTER_METHOD(0x01C59BC0, void, set_EnableSave, bool value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ClearSaveGameCache, )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequireStorage, app::Action* success, app::Action* failure)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, SaveGameName, int32_t slot_index, int32_t backup_index)
    IL2CPP_REGISTER_METHOD(0x01C59C70, void, CopySaveGame, int32_t source_slot, int32_t dest_slot)
    IL2CPP_REGISTER_METHOD(0x01C59D90, bool, UpdateSaveGame_1, int32_t slot_index, app::Action* success, app::Action* failure)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Queue_1_System_Action_*, get_QueuedStorageOperations, app::XboxOneSave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Queue_1_System_String_*, get_QueuedStorageOperationNames, app::XboxOneSave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStorageBusy, )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StorageHasOperationsInProgress, )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, UpdateSaveGame_2, app::String* buffer_name, app::Action* success, app::Action* failure)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Log, app::String* s)
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        WriteSaveGame_1,
        app::Byte__Array* data,
        int32_t save_slot,
        app::String* save_game_name,
        app::Action* success,
        app::Action* failure
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, WriteSaveGame_2, app::Byte__Array* data, app::String* buffer_name, app::Action* success, app::Action* failure)
    IL2CPP_REGISTER_METHOD(0x01C5A0D0, app::Task_1_System_Collections_Generic_IEnumerable_1_*, LoadAndCacheDataFor, app::String__Array* buffers)
    IL2CPP_REGISTER_METHOD(0x01C5A350, app::Task_1_System_Byte_*, GetAsync, app::String* buffer_name)
    IL2CPP_REGISTER_METHOD(0x01C5A4C0, app::Task_1_System_Boolean_*, Write, app::Tuple_2_String_Byte___Array* data_pairs)
    IL2CPP_REGISTER_METHOD(0x01C5A810, void, ctor, app::XboxOneSave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C5AA60, void, cctor, )
} // namespace app::classes::XboxOneSave
