#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CollectionChangeEventArgs.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/DataView.h>
#include <Modloader/app/structs/DataViewListener.h>
#include <Modloader/app/structs/Index.h>
#include <Modloader/app/structs/ListChangedEventArgs.h>
#include <Modloader/app/structs/ListChangedType__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Data::DataViewListener {
    IL2CPP_REGISTER_METHOD(0x01F47680, void, ctor, app::DataViewListener* this_ptr, app::DataView* dv)
    IL2CPP_REGISTER_METHOD(
        0x01F477F0,
        void,
        ChildRelationCollectionChanged,
        app::DataViewListener* this_ptr,
        app::Object* sender,
        app::CollectionChangeEventArgs* e
    )
    IL2CPP_REGISTER_METHOD(
        0x01F47920,
        void,
        ParentRelationCollectionChanged,
        app::DataViewListener* this_ptr,
        app::Object* sender,
        app::CollectionChangeEventArgs* e
    )
    IL2CPP_REGISTER_METHOD(0x01F47A50, void, ColumnCollectionChanged, app::DataViewListener* this_ptr, app::Object* sender, app::CollectionChangeEventArgs* e)
    IL2CPP_REGISTER_METHOD(
        0x01F47B90,
        void,
        MaintainDataView,
        app::DataViewListener* this_ptr,
        app::ListChangedType__Enum changed_type,
        app::DataRow* row,
        bool track_add_remove
    )
    IL2CPP_REGISTER_METHOD(0x01F47CD0, void, IndexListChanged, app::DataViewListener* this_ptr, app::ListChangedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x01F47ED0, void, RegisterMetaDataEvents, app::DataViewListener* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x01F48440, void, UnregisterMetaDataEvents_1, app::DataViewListener* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F48450, void, UnregisterMetaDataEvents_2, app::DataViewListener* this_ptr, bool update_listeners)
    IL2CPP_REGISTER_METHOD(0x01F48AB0, void, RegisterListChangedEvent, app::DataViewListener* this_ptr, app::Index* index)
    IL2CPP_REGISTER_METHOD(0x01F48C10, void, UnregisterListChangedEvent, app::DataViewListener* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F48E20, void, CleanUp, app::DataViewListener* this_ptr, bool update_listeners)
    IL2CPP_REGISTER_METHOD(0x01F48E40, void, RegisterListener, app::DataViewListener* this_ptr, app::DataTable* table)
} // namespace app::classes::System::Data::DataViewListener
