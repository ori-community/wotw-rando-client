#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlTextReaderImpl_NodeData.h>

namespace app::classes::System::Xml::XmlTextReaderImpl_NodeData {
    IL2CPP_REGISTER_METHOD(0x01FBBCD0, app::XmlTextReaderImpl_NodeData*, get_None, )
    IL2CPP_REGISTER_METHOD(0x01FBBE60, void, ctor, app::XmlTextReaderImpl_NodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_LineNo, app::XmlTextReaderImpl_NodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FDCE0, int32_t, get_LinePos, app::XmlTextReaderImpl_NodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FBBE80, bool, get_IsEmptyElement, app::XmlTextReaderImpl_NodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsEmptyElement, app::XmlTextReaderImpl_NodeData* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01FBBE90, bool, get_IsDefaultAttribute, app::XmlTextReaderImpl_NodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsDefaultAttribute, app::XmlTextReaderImpl_NodeData* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01FBBEA0, bool, get_ValueBuffered, app::XmlTextReaderImpl_NodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FBBEB0, app::String*, get_StringValue, app::XmlTextReaderImpl_NodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FBBEF0, void, TrimSpacesInValue, app::XmlTextReaderImpl_NodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FBC060, void, Clear, app::XmlTextReaderImpl_NodeData* this_ptr, app::XmlNodeType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01FBC130, void, ClearName, app::XmlTextReaderImpl_NodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FBC200, void, SetLineInfo, app::XmlTextReaderImpl_NodeData* this_ptr, int32_t line_no, int32_t line_pos)
    IL2CPP_REGISTER_METHOD(0x01FBC210, void, SetLineInfo2, app::XmlTextReaderImpl_NodeData* this_ptr, int32_t line_no, int32_t line_pos)
    IL2CPP_REGISTER_METHOD(0x01FBC220, void, SetValueNode_1, app::XmlTextReaderImpl_NodeData* this_ptr, app::XmlNodeType__Enum type, app::String* value)
    IL2CPP_REGISTER_METHOD(
        0x01FBC250,
        void,
        SetValueNode_2,
        app::XmlTextReaderImpl_NodeData* this_ptr,
        app::XmlNodeType__Enum type,
        app::Char__Array* chars,
        int32_t start_pos,
        int32_t len
    )
    IL2CPP_REGISTER_METHOD(0x01FBC2A0, void, SetNamedNode_1, app::XmlTextReaderImpl_NodeData* this_ptr, app::XmlNodeType__Enum type, app::String* local_name)
    IL2CPP_REGISTER_METHOD(
        0x01FBC360,
        void,
        SetNamedNode_2,
        app::XmlTextReaderImpl_NodeData* this_ptr,
        app::XmlNodeType__Enum type,
        app::String* local_name,
        app::String* prefix,
        app::String* name_w_prefix
    )
    IL2CPP_REGISTER_METHOD(0x01FBC440, void, SetValue_1, app::XmlTextReaderImpl_NodeData* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01FBC450, void, SetValue_2, app::XmlTextReaderImpl_NodeData* this_ptr, app::Char__Array* chars, int32_t start_pos, int32_t len)
    IL2CPP_REGISTER_METHOD(0x01FBC470, void, OnBufferInvalidated, app::XmlTextReaderImpl_NodeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FBC4C0, void, CopyTo_1, app::XmlTextReaderImpl_NodeData* this_ptr, int32_t value_offset, app::StringBuilder* sb)
    IL2CPP_REGISTER_METHOD(
        0x01FBC560,
        int32_t,
        CopyTo_2,
        app::XmlTextReaderImpl_NodeData* this_ptr,
        int32_t value_offset,
        app::Char__Array* buffer,
        int32_t offset,
        int32_t length
    )
    IL2CPP_REGISTER_METHOD(0x01FBC5E0, app::String*, GetNameWPrefix, app::XmlTextReaderImpl_NodeData* this_ptr, app::XmlNameTable* nt)
    IL2CPP_REGISTER_METHOD(0x01FBC6D0, app::String*, CreateNameWPrefix, app::XmlTextReaderImpl_NodeData* this_ptr, app::XmlNameTable* nt)
    IL2CPP_REGISTER_METHOD(0x01FBC7B0, int32_t, IComparable_CompareTo, app::XmlTextReaderImpl_NodeData* this_ptr, app::Object* obj)
} // namespace app::classes::System::Xml::XmlTextReaderImpl_NodeData
