#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReadObjectInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReadObjectInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadObjectInfo__Fields_DEFINED)
#include <Modloader/app/structs/StreamingContext.h>
#if defined(IL2CPP_STRUCT_StreamingContext_DEFINED)
#define IL2CPP_STRUCT_ReadObjectInfo__Fields_DEFINED
struct Type;
struct ObjectManager;
struct SerObjectInfoCache;
struct String__Array;
struct Type__Array;
struct ISerializationSurrogate;
struct List_1_System_Type_;
struct SerObjectInfoInit;
struct IFormatterConverter;
struct __declspec(align(8)) ReadObjectInfo__Fields {
    int32_t objectInfoId;
    struct Type* objectType;
    struct ObjectManager* objectManager;
    int32_t count;
    bool isSi;
    bool isNamed;
    bool isTyped;
    bool bSimpleAssembly;
    struct SerObjectInfoCache* cache;
    struct String__Array* wireMemberNames;
    struct Type__Array* wireMemberTypes;
    int32_t lastPosition;
    struct ISerializationSurrogate* serializationSurrogate;
    struct StreamingContext context;
    struct List_1_System_Type_* memberTypesList;
    struct SerObjectInfoInit* serObjectInfoInit;
    struct IFormatterConverter* formatterConverter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReadObjectInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReadObjectInfo__Fields_FWDDECL
#include <Modloader/app/structs/IFormatterConverter.h>
#include <Modloader/app/structs/ISerializationSurrogate.h>
#include <Modloader/app/structs/List_1_System_Type_.h>
#include <Modloader/app/structs/ObjectManager.h>
#include <Modloader/app/structs/SerObjectInfoCache.h>
#include <Modloader/app/structs/SerObjectInfoInit.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_ReadObjectInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadObjectInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReadObjectInfo__Fields_FWDDECL)
#include <Modloader/app/structs/ReadObjectInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReadObjectInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
