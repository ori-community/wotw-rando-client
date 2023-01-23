#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DataViewManagerListItemTypeDescriptor.h>
#include <Modloader/app/structs/DataViewManager.h>
#include <Modloader/app/structs/DataView.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/AttributeCollection.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TypeConverter.h>
#include <Modloader/app/structs/EventDescriptor_1.h>
#include <Modloader/app/structs/PropertyDescriptor.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/EventDescriptorCollection.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>

namespace app::classes::System::Data::DataViewManagerListItemTypeDescriptor {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DataViewManagerListItemTypeDescriptor * this_ptr, app::DataViewManager* data_view_manager))
    IL2CPP_REGISTER_METHOD(0x01F4B330, app::DataView*, GetDataView, (app::DataViewManagerListItemTypeDescriptor * this_ptr, app::DataTable* table))
    IL2CPP_REGISTER_METHOD(0x01F4B4A0, app::AttributeCollection*, ICustomTypeDescriptor_GetAttributes, (app::DataViewManagerListItemTypeDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, ICustomTypeDescriptor_GetClassName, (app::DataViewManagerListItemTypeDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, ICustomTypeDescriptor_GetComponentName, (app::DataViewManagerListItemTypeDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::TypeConverter*, ICustomTypeDescriptor_GetConverter, (app::DataViewManagerListItemTypeDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::EventDescriptor_1*, ICustomTypeDescriptor_GetDefaultEvent, (app::DataViewManagerListItemTypeDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::PropertyDescriptor*, ICustomTypeDescriptor_GetDefaultProperty, (app::DataViewManagerListItemTypeDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, ICustomTypeDescriptor_GetEditor, (app::DataViewManagerListItemTypeDescriptor * this_ptr, app::Type* editor_base_type))
    IL2CPP_REGISTER_METHOD(0x01F4B5E0, app::EventDescriptorCollection*, ICustomTypeDescriptor_GetEvents_1, (app::DataViewManagerListItemTypeDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F4B720, app::EventDescriptorCollection*, ICustomTypeDescriptor_GetEvents_2, (app::DataViewManagerListItemTypeDescriptor * this_ptr, app::Attribute__Array* attributes))
    IL2CPP_REGISTER_METHOD(0x01F4B870, app::PropertyDescriptorCollection*, ICustomTypeDescriptor_GetProperties_1, (app::DataViewManagerListItemTypeDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F4B8F0, app::PropertyDescriptorCollection*, ICustomTypeDescriptor_GetProperties_2, (app::DataViewManagerListItemTypeDescriptor * this_ptr, app::Attribute__Array* attributes))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, ICustomTypeDescriptor_GetPropertyOwner, (app::DataViewManagerListItemTypeDescriptor * this_ptr, app::PropertyDescriptor* pd))
} // namespace app::classes::System::Data::DataViewManagerListItemTypeDescriptor
