#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SequenceNode_SequenceConstructPosContext.h>
#include <Modloader/app/structs/SequenceNode_SequenceConstructPosContext__Array.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02E6CDA0, app::EqualityComparer_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02B4CF00,
        int32_t,
        IndexOf,
        app::EqualityComparer_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr,
        app::SequenceNode_SequenceConstructPosContext__Array* array,
        app::SequenceNode_SequenceConstructPosContext value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4D010,
        int32_t,
        LastIndexOf,
        app::EqualityComparer_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr,
        app::SequenceNode_SequenceConstructPosContext__Array* array,
        app::SequenceNode_SequenceConstructPosContext value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4D120,
        int32_t,
        IEqualityComparer_GetHashCode,
        app::EqualityComparer_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4D230,
        bool,
        IEqualityComparer_Equals,
        app::EqualityComparer_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EqualityComparer_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_
