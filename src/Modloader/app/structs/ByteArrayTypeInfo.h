#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ByteArrayTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ByteArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteArrayTypeInfo_DEFINED)
#include <Modloader/app/structs/ByteArrayTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_ByteArrayTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ByteArrayTypeInfo_DEFINED
struct ByteArrayTypeInfo__Class;
struct ByteArrayTypeInfo {
    struct ByteArrayTypeInfo__Class* klass;
    MonitorData* monitor;
    struct ByteArrayTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ByteArrayTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_ByteArrayTypeInfo_FWDDECL
#include <Modloader/app/structs/ByteArrayTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ByteArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteArrayTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_ByteArrayTypeInfo_FWDDECL)
#include <Modloader/app/structs/ByteArrayTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ByteArrayTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
