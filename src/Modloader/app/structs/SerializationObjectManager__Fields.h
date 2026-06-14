#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationObjectManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationObjectManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationObjectManager__Fields_DEFINED)
#include <Modloader/app/structs/StreamingContext.h>
#if defined(IL2CPP_STRUCT_StreamingContext_DEFINED)
#define IL2CPP_STRUCT_SerializationObjectManager__Fields_DEFINED
struct Hashtable;
struct SerializationEventHandler;
struct __declspec(align(8)) SerializationObjectManager__Fields {
    struct Hashtable* m_objectSeenTable;
    struct SerializationEventHandler* m_onSerializedHandler;
    struct StreamingContext m_context;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializationObjectManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_SerializationObjectManager__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/SerializationEventHandler.h>
#endif
#undef IL2CPP_STRUCT_SerializationObjectManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationObjectManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SerializationObjectManager__Fields_FWDDECL)
#include <Modloader/app/structs/SerializationObjectManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationObjectManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
