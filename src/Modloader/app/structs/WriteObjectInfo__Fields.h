#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteObjectInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteObjectInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteObjectInfo__Fields_DEFINED)
#include <Modloader/app/structs/StreamingContext.h>
#if defined(IL2CPP_STRUCT_StreamingContext_DEFINED)
#define IL2CPP_STRUCT_WriteObjectInfo__Fields_DEFINED
struct Object;
struct Type;
struct SerializationInfo;
struct SerObjectInfoCache;
struct Object__Array;
struct ISerializationSurrogate;
struct SerObjectInfoInit;
struct String;
struct __declspec(align(8)) WriteObjectInfo__Fields {
    int32_t objectInfoId;
    struct Object* obj;
    struct Type* objectType;
    bool isSi;
    bool isNamed;
    bool isTyped;
    bool isArray;
    struct SerializationInfo* si;
    struct SerObjectInfoCache* cache;
    struct Object__Array* memberData;
    struct ISerializationSurrogate* serializationSurrogate;
    struct StreamingContext context;
    struct SerObjectInfoInit* serObjectInfoInit;
    int64_t objectId;
    int64_t assemId;
    struct String* binderTypeName;
    struct String* binderAssemblyString;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WriteObjectInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_WriteObjectInfo__Fields_FWDDECL
#include <Modloader/app/structs/ISerializationSurrogate.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SerObjectInfoCache.h>
#include <Modloader/app/structs/SerObjectInfoInit.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_WriteObjectInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteObjectInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WriteObjectInfo__Fields_FWDDECL)
#include <Modloader/app/structs/WriteObjectInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteObjectInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
