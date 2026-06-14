#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SequenceNode_SequenceConstructPosContext.h>
#include <Modloader/app/structs/SequenceNode_SequenceConstructPosContext__Array.h>
#include <Modloader/app/structs/Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_.h>
#include <Modloader/app/structs/Stack_1_T_Enumerator_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_.h>

namespace app::classes::System::Collections::Generic::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_1, app::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02CF91F0,
        void,
        Push,
        app::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr,
        app::SequenceNode_SequenceConstructPosContext item
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02CF90E0,
        app::SequenceNode_SequenceConstructPosContext,
        Pop,
        app::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02CF8990, void, ctor_2, app::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02CF8AC0,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02031F00, void, Clear, app::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02CF8C20,
        bool,
        Contains,
        app::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr,
        app::SequenceNode_SequenceConstructPosContext item
    )
    IL2CPP_REGISTER_METHOD(
        0x02CF8C80,
        void,
        ICollection_CopyTo,
        app::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr,
        app::Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(
        0x02CF8F20,
        app::Stack_1_T_Enumerator_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_,
        GetEnumerator,
        app::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CF8F80,
        app::IEnumerator_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator,
        app::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CF8F80,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CF9050,
        app::SequenceNode_SequenceConstructPosContext,
        Peek,
        app::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CF92E0,
        app::SequenceNode_SequenceConstructPosContext__Array*,
        ToArray,
        app::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02CF93F0, void, ThrowForEmptyStack, app::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Stack_1_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_
