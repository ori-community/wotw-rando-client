#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UInt64Storage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UInt64Storage_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt64Storage_DEFINED)
#include <Modloader/app/structs/UInt64Storage__Fields.h>
#if defined(IL2CPP_STRUCT_UInt64Storage__Fields_DEFINED)
#define IL2CPP_STRUCT_UInt64Storage_DEFINED
struct UInt64Storage__Class;
struct UInt64Storage {
    struct UInt64Storage__Class* klass;
    MonitorData* monitor;
    struct UInt64Storage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UInt64Storage_FWDDECL)
#define IL2CPP_STRUCT_UInt64Storage_FWDDECL
#include <Modloader/app/structs/UInt64Storage__Class.h>
#endif
#undef IL2CPP_STRUCT_UInt64Storage_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt64Storage_DEFINED) && !defined(IL2CPP_STRUCT_UInt64Storage_FWDDECL)
#include <Modloader/app/structs/UInt64Storage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UInt64Storage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
