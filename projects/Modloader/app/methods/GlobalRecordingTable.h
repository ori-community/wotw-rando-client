#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GlobalRecordingTable {
    IL2CPP_REGISTER_METHOD(0x007F7BE0, void, AddEntry, (app::GlobalRecordingTable * this_ptr, app::GlobalRecordingTable_RecordableEntry* entry))
    IL2CPP_REGISTER_METHOD(0x007F7DA0, app::GlobalRecordingTable_RecordableEntry*, RegisterInstantiatedRuntime, (app::GlobalRecordingTable * this_ptr, app::IRecordable* instance, app::GameObject* prefab, bool register_all_children))
    IL2CPP_REGISTER_METHOD(0x007F8010, app::GlobalRecordingTable_RecordableEntry*, RegisterInstantiatedEditTime, (app::GlobalRecordingTable * this_ptr, app::RecordableIdData id_data, app::IRecordable* instance, app::GameObject* prefab, bool register_all_children))
    IL2CPP_REGISTER_METHOD(0x007F81F0, void, RegisterAllChildrenOfInstantiated, (app::GlobalRecordingTable * this_ptr, app::IRecordable* instance, app::GameObject* prefab))
    IL2CPP_REGISTER_METHOD(0x007F83E0, app::GlobalRecordingTable_RecordableEntry*, RegisterChildOfInstantiated_1, (app::GlobalRecordingTable * this_ptr, app::Component_1* component, app::IRecordable* instance_root, app::GameObject* prefab))
    IL2CPP_REGISTER_METHOD(0x007F86F0, app::GlobalRecordingTable_RecordableEntry*, RegisterChildOfInstantiated_2, (app::GlobalRecordingTable * this_ptr, app::IRecordable* recordable, app::IRecordable* instance_root, app::GameObject* prefab))
    IL2CPP_REGISTER_METHOD(0x007F8A20, app::GlobalRecordingTable_RecordableEntry*, RegisterSceneRecordable, (app::GlobalRecordingTable * this_ptr, app::IRecordable* recordable))
    IL2CPP_REGISTER_METHOD(0x007F8C50, app::GlobalRecordingTable_RecordableEntry*, RegisterPuppetRecordable, (app::GlobalRecordingTable * this_ptr, app::IRecordable* recordable, app::GenericPuppet* puppet))
    IL2CPP_REGISTER_METHOD(0x007F8E60, app::GlobalRecordingTable_RecordableEntry*, GetRecordingEntry, (app::GlobalRecordingTable * this_ptr, int64_t recording_id))
    IL2CPP_REGISTER_METHOD(0x007F8F40, app::GlobalRecordingTable_RecordableEntry*, GetRecordingEntryRuntime, (app::GlobalRecordingTable * this_ptr, app::Component_1* target))
    IL2CPP_REGISTER_METHOD(0x007F9060, app::GlobalRecordingTable_RecordableEntry*, GetRecordingEntryForRecordableRuntime, (app::GlobalRecordingTable * this_ptr, app::IRecordable* target))
    IL2CPP_REGISTER_METHOD(0x007F9150, app::Dictionary_2_System_Int64_EntityPlaceholder_*, get_Placeholders, (app::GlobalRecordingTable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007F9370, void, RebuildRecordingTableForEditor, (app::GlobalRecordingTable * this_ptr, app::List_1_List_1_GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_* world_data_per_frame, app::Transform* setup_root))
    IL2CPP_REGISTER_METHOD(0x007F94D0, void, ProcessFrame, (app::GlobalRecordingTable * this_ptr, app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData* data, int32_t frame, app::Transform* setup_root))
    IL2CPP_REGISTER_METHOD(0x007F98D0, void, AppendSceneRecordablesForEditor, (app::GlobalRecordingTable * this_ptr, app::Transform* scene_root, app::Transform* setup_root))
    IL2CPP_REGISTER_METHOD(0x007F9B40, app::GameObject*, CreatePlaybackInstance, (app::GlobalRecordingTable * this_ptr, app::GameObject* prefab, app::Vector3 position, app::Quaternion rotation, app::Transform* parent))
    IL2CPP_REGISTER_METHOD(0x007F9D70, app::IRecordable*, GetMainRecordableOnObject, (app::GameObject * go))
    IL2CPP_REGISTER_METHOD(0x007F9E80, void, ctor, (app::GlobalRecordingTable * this_ptr))
} // namespace app::classes::GlobalRecordingTable
