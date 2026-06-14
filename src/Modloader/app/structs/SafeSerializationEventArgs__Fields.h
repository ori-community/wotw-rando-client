#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeSerializationEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeSerializationEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeSerializationEventArgs__Fields_DEFINED)
#include <Modloader/app/structs/StreamingContext.h>
#if defined(IL2CPP_STRUCT_StreamingContext_DEFINED)
#define IL2CPP_STRUCT_SafeSerializationEventArgs__Fields_DEFINED
struct List_1_System_Object_;
struct __declspec(align(8)) SafeSerializationEventArgs__Fields {
    struct StreamingContext m_streamingContext;
    struct List_1_System_Object_* m_serializedStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SafeSerializationEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_SafeSerializationEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Object_.h>
#endif
#undef IL2CPP_STRUCT_SafeSerializationEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeSerializationEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SafeSerializationEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/SafeSerializationEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeSerializationEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
