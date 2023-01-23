#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UInt32Storage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UInt32Storage_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt32Storage_DEFINED)
#include <Modloader/app/structs/UInt32Storage__Fields.h>
#if defined(IL2CPP_STRUCT_UInt32Storage__Fields_DEFINED)
#define IL2CPP_STRUCT_UInt32Storage_DEFINED
struct UInt32Storage__Class;
struct UInt32Storage {
    struct UInt32Storage__Class* klass;
    MonitorData* monitor;
    struct UInt32Storage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UInt32Storage_FWDDECL)
#define IL2CPP_STRUCT_UInt32Storage_FWDDECL
#include <Modloader/app/structs/UInt32Storage__Class.h>
#endif
#undef IL2CPP_STRUCT_UInt32Storage_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt32Storage_DEFINED) && !defined(IL2CPP_STRUCT_UInt32Storage_FWDDECL)
#include <Modloader/app/structs/UInt32Storage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UInt32Storage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
