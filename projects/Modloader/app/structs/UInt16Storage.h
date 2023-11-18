#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UInt16Storage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UInt16Storage_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt16Storage_DEFINED)
#include <Modloader/app/structs/UInt16Storage__Fields.h>
#if defined(IL2CPP_STRUCT_UInt16Storage__Fields_DEFINED)
#define IL2CPP_STRUCT_UInt16Storage_DEFINED
struct UInt16Storage__Class;
struct UInt16Storage {
    struct UInt16Storage__Class* klass;
    MonitorData* monitor;
    struct UInt16Storage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UInt16Storage_FWDDECL)
#define IL2CPP_STRUCT_UInt16Storage_FWDDECL
#include <Modloader/app/structs/UInt16Storage__Class.h>
#endif
#undef IL2CPP_STRUCT_UInt16Storage_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt16Storage_DEFINED) && !defined(IL2CPP_STRUCT_UInt16Storage_FWDDECL)
#include <Modloader/app/structs/UInt16Storage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UInt16Storage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
