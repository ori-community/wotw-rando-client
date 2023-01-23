#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ByteStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ByteStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteStorage_DEFINED)
#include <Modloader/app/structs/ByteStorage__Fields.h>
#if defined(IL2CPP_STRUCT_ByteStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_ByteStorage_DEFINED
struct ByteStorage__Class;
struct ByteStorage {
    struct ByteStorage__Class* klass;
    MonitorData* monitor;
    struct ByteStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ByteStorage_FWDDECL)
#define IL2CPP_STRUCT_ByteStorage_FWDDECL
#include <Modloader/app/structs/ByteStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_ByteStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteStorage_DEFINED) && !defined(IL2CPP_STRUCT_ByteStorage_FWDDECL)
#include <Modloader/app/structs/ByteStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ByteStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
