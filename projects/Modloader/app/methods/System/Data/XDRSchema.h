#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XDRSchema.h>
#include <Modloader/app/structs/XDRSchema_NameType.h>
#include <Modloader/app/structs/XmlElement.h>

namespace app::classes::System::Data::XDRSchema {
    IL2CPP_REGISTER_METHOD(0x022C1A50, void, ctor, app::XDRSchema* this_ptr, app::DataSet* ds, bool f_inline)
    IL2CPP_REGISTER_METHOD(0x022C1B10, void, LoadSchema, app::XDRSchema* this_ptr, app::XmlElement* schema_root, app::DataSet* ds)
    IL2CPP_REGISTER_METHOD(0x022C1D70, app::XmlElement*, FindTypeNode, app::XDRSchema* this_ptr, app::XmlElement* node)
    IL2CPP_REGISTER_METHOD(0x022C20D0, bool, IsTextOnlyContent, app::XDRSchema* this_ptr, app::XmlElement* node)
    IL2CPP_REGISTER_METHOD(0x022C22D0, bool, IsXDRField, app::XDRSchema* this_ptr, app::XmlElement* node, app::XmlElement* type_node)
    IL2CPP_REGISTER_METHOD(0x022C2480, app::DataTable*, HandleTable, app::XDRSchema* this_ptr, app::XmlElement* node)
    IL2CPP_REGISTER_METHOD(0x022C2840, app::XDRSchema_NameType*, FindNameType, app::String* name)
    IL2CPP_REGISTER_METHOD(0x022C2980, app::Type*, ParseDataType, app::XDRSchema* this_ptr, app::String* dt, app::String* dt_values)
    IL2CPP_REGISTER_METHOD(0x022C2B20, app::String*, GetInstanceName, app::XDRSchema* this_ptr, app::XmlElement* node)
    IL2CPP_REGISTER_METHOD(0x022C2C80, void, HandleColumn, app::XDRSchema* this_ptr, app::XmlElement* node, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x022C3750, void, GetMinMax_1, app::XDRSchema* this_ptr, app::XmlElement* el_node, int32_t* min_occurs, int32_t* max_occurs)
    IL2CPP_REGISTER_METHOD(
        0x022C3780,
        void,
        GetMinMax_2,
        app::XDRSchema* this_ptr,
        app::XmlElement* el_node,
        bool is_attribute,
        int32_t* min_occurs,
        int32_t* max_occurs
    )
    IL2CPP_REGISTER_METHOD(
        0x022C3B20,
        void,
        HandleTypeNode,
        app::XDRSchema* this_ptr,
        app::XmlElement* type_node,
        app::DataTable* table,
        app::ArrayList* table_children
    )
    IL2CPP_REGISTER_METHOD(
        0x022C3D50,
        app::DataTable*,
        InstantiateTable,
        app::XDRSchema* this_ptr,
        app::DataSet* data_set,
        app::XmlElement* node,
        app::XmlElement* type_node
    )
    IL2CPP_REGISTER_METHOD(0x022C4520, app::DataTable*, InstantiateSimpleTable, app::XDRSchema* this_ptr, app::DataSet* data_set, app::XmlElement* node)
    IL2CPP_REGISTER_METHOD(0x022C48B0, void, cctor, )
} // namespace app::classes::System::Data::XDRSchema
