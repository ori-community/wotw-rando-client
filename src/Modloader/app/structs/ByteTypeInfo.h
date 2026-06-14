#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ByteTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ByteTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteTypeInfo_DEFINED)
#include <Modloader/app/structs/ByteTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_ByteTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ByteTypeInfo_DEFINED
struct ByteTypeInfo__Class;
struct ByteTypeInfo {
    struct ByteTypeInfo__Class* klass;
    MonitorData* monitor;
    struct ByteTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ByteTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_ByteTypeInfo_FWDDECL
#include <Modloader/app/structs/ByteTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ByteTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_ByteTypeInfo_FWDDECL)
#include <Modloader/app/structs/ByteTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ByteTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
