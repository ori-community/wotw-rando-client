#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttributePSVIInfo.h>
#include <Modloader/app/structs/IXmlLineInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValidatingReaderNodeData.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>

namespace app::classes::System::Xml::ValidatingReaderNodeData {
    IL2CPP_REGISTER_METHOD(0x01954890, void, ctor_1, app::ValidatingReaderNodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019548A0, void, ctor_2, app::ValidatingReaderNodeData* this_ptr, app::XmlNodeType__Enum node_type)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_LocalName, app::ValidatingReaderNodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_LocalName, app::ValidatingReaderNodeData* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Namespace, app::ValidatingReaderNodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Namespace, app::ValidatingReaderNodeData* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_Prefix, app::ValidatingReaderNodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Prefix, app::ValidatingReaderNodeData* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x019548B0, app::String*, GetAtomizedNameWPrefix, app::ValidatingReaderNodeData* this_ptr, app::XmlNameTable* name_table)
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_Depth, app::ValidatingReaderNodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E57B0, void, set_Depth, app::ValidatingReaderNodeData* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_RawValue, app::ValidatingReaderNodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_RawValue, app::ValidatingReaderNodeData* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_OriginalStringValue, app::ValidatingReaderNodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD490, app::XmlNodeType__Enum, get_NodeType, app::ValidatingReaderNodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_NodeType, app::ValidatingReaderNodeData* this_ptr, app::XmlNodeType__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::AttributePSVIInfo*, get_AttInfo, app::ValidatingReaderNodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_AttInfo, app::ValidatingReaderNodeData* this_ptr, app::AttributePSVIInfo* value)
    IL2CPP_REGISTER_METHOD(0x003FDCE0, int32_t, get_LineNumber, app::ValidatingReaderNodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C6660, int32_t, get_LinePosition, app::ValidatingReaderNodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019549A0, void, Clear, app::ValidatingReaderNodeData* this_ptr, app::XmlNodeType__Enum node_type)
    IL2CPP_REGISTER_METHOD(0x01954AA0, void, SetLineInfo_1, app::ValidatingReaderNodeData* this_ptr, int32_t line_no, int32_t line_pos)
    IL2CPP_REGISTER_METHOD(0x01954AB0, void, SetLineInfo_2, app::ValidatingReaderNodeData* this_ptr, app::IXmlLineInfo* line_info)
    IL2CPP_REGISTER_METHOD(
        0x01954B70,
        void,
        SetItemData_1,
        app::ValidatingReaderNodeData* this_ptr,
        app::String* local_name,
        app::String* prefix,
        app::String* ns,
        int32_t depth
    )
    IL2CPP_REGISTER_METHOD(0x01954C30, void, SetItemData_2, app::ValidatingReaderNodeData* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x00D09510, void, SetItemData_3, app::ValidatingReaderNodeData* this_ptr, app::String* value, app::String* original_string_value)
} // namespace app::classes::System::Xml::ValidatingReaderNodeData
