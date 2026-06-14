#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectWriter__Fields_DEFINED)
#include <Modloader/app/structs/InternalPrimitiveTypeE__Enum.h>
#include <Modloader/app/structs/StreamingContext.h>
#if defined(IL2CPP_STRUCT_StreamingContext_DEFINED) && defined(IL2CPP_STRUCT_InternalPrimitiveTypeE__Enum_DEFINED)
#define IL2CPP_STRUCT_ObjectWriter__Fields_DEFINED
struct Queue;
struct ObjectIDGenerator;
struct ISurrogateSelector;
struct _BinaryWriter;
struct SerializationObjectManager;
struct String;
struct Header__Array;
struct InternalFE;
struct SerializationBinder;
struct SerObjectInfoInit;
struct IFormatterConverter;
struct Object__Array;
struct Object;
struct Type;
struct Hashtable;
struct SerStack;
struct __declspec(align(8)) ObjectWriter__Fields {
    struct Queue* m_objectQueue;
    struct ObjectIDGenerator* m_idGenerator;
    int32_t m_currentId;
    struct ISurrogateSelector* m_surrogates;
    struct StreamingContext m_context;
    struct _BinaryWriter* serWriter;
    struct SerializationObjectManager* m_objectManager;
    int64_t topId;
    struct String* topName;
    struct Header__Array* headers;
    struct InternalFE* formatterEnums;
    struct SerializationBinder* m_binder;
    struct SerObjectInfoInit* serObjectInfoInit;
    struct IFormatterConverter* m_formatterConverter;
    struct Object__Array* crossAppDomainArray;
    struct Object* previousObj;
    int64_t previousId;
    struct Type* previousType;
    InternalPrimitiveTypeE__Enum previousCode;

    struct Hashtable* assemblyToIdTable;
    struct SerStack* niPool;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_ObjectWriter__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Header__Array.h>
#include <Modloader/app/structs/IFormatterConverter.h>
#include <Modloader/app/structs/ISurrogateSelector.h>
#include <Modloader/app/structs/InternalFE.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectIDGenerator.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Queue.h>
#include <Modloader/app/structs/SerObjectInfoInit.h>
#include <Modloader/app/structs/SerStack.h>
#include <Modloader/app/structs/SerializationBinder.h>
#include <Modloader/app/structs/SerializationObjectManager.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/_BinaryWriter.h>
#endif
#undef IL2CPP_STRUCT_ObjectWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ObjectWriter__Fields_FWDDECL)
#include <Modloader/app/structs/ObjectWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
