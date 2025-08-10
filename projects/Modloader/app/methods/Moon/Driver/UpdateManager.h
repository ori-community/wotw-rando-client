#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IComparer_1_Moon_Driver_UpdateManager_Entry_.h>
#include <Modloader/app/structs/IUpdateHandlerBase.h>
#include <Modloader/app/structs/List_1_Moon_Driver_UpdateManager_Entry_.h>
#include <Modloader/app/structs/StreamWriter.h>
#include <Modloader/app/structs/UpdateManager.h>
#include <Modloader/app/structs/UpdateManager_Entry.h>
#include <Modloader/app/structs/UpdateManager_GenericEntry.h>
#include <Modloader/app/structs/UpdateManager__Array.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::Moon::Driver::UpdateManager {
    IL2CPP_REGISTER_METHOD(0x031371A0, void, ctor, app::UpdateManager* this_ptr, app::UpdateType__Enum update_type, app::UpdateManager__Array* managers)
    IL2CPP_REGISTER_METHOD(0x031376B0, int32_t, get_EntryCount, app::UpdateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03137740, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_EnableProfiling, app::UpdateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_EnableProfiling, app::UpdateManager* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03137810, void, AddHandler, app::UpdateManager* this_ptr, app::IUpdateHandlerBase* update_handler, int32_t execution_order)
    IL2CPP_REGISTER_METHOD(0x03137A30, void, RemoveHandler, app::UpdateManager* this_ptr, app::IUpdateHandlerBase* drivable)
    IL2CPP_REGISTER_METHOD(0x03137BB0, void, AddNewEntriesToActiveEntries, app::UpdateManager* this_ptr, int32_t upd_cnt)
    IL2CPP_REGISTER_METHOD(0x03137CD0, void, AddNewEntriesToActiveEntriesAndEntriesToUpdate, app::UpdateManager* this_ptr, int32_t upd_cnt)
    IL2CPP_REGISTER_METHOD(0x03137E40, void, Update, app::UpdateManager* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x031381C0, void, UpdateHandlerEntry, app::UpdateManager* this_ptr, app::UpdateManager_Entry* entry, float delta_time)
    IL2CPP_REGISTER_METHOD(
        0x03138690,
        bool,
        ListIsValidForBinarySearch,
        app::List_1_Moon_Driver_UpdateManager_Entry_* entry_list,
        app::IComparer_1_Moon_Driver_UpdateManager_Entry_* cmp
    )
    IL2CPP_REGISTER_METHOD(
        0x03138830,
        void,
        AddEntryByInsertSort,
        app::List_1_Moon_Driver_UpdateManager_Entry_* entry_list,
        app::UpdateManager_Entry* entry,
        app::IComparer_1_Moon_Driver_UpdateManager_Entry_* cmp
    )
    IL2CPP_REGISTER_METHOD(0x031388F0, void, RemoveEntry, app::UpdateManager* this_ptr, app::UpdateManager_Entry* entry)
    IL2CPP_REGISTER_METHOD(0x03138B00, void, MoveEntryToCorrectManager, app::UpdateManager* this_ptr, app::UpdateManager_GenericEntry* entry)
    IL2CPP_REGISTER_METHOD(0x03138C60, app::UpdateManager_Entry*, GetEntryFromPool, app::IUpdateHandlerBase* handler, app::UpdateType__Enum update_type)
    IL2CPP_REGISTER_METHOD(0x03139020, void, ReturnEntryToPool, app::UpdateManager_Entry* entry)
    IL2CPP_REGISTER_METHOD(0x031391F0, void, DumpEntries, app::UpdateManager* this_ptr, app::StreamWriter* sw)
    IL2CPP_REGISTER_METHOD(0x0313A040, void, cctor, )
} // namespace app::classes::Moon::Driver::UpdateManager
