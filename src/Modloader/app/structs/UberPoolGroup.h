#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolGroup_DEFINED)
#include <Modloader/app/structs/UberPoolGroup__Fields.h>
#if defined(IL2CPP_STRUCT_UberPoolGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolGroup_DEFINED
struct UberPoolGroup__Class;
struct UberPoolGroup {
    struct UberPoolGroup__Class* klass;
    MonitorData* monitor;
    struct UberPoolGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolGroup_FWDDECL)
#define IL2CPP_STRUCT_UberPoolGroup_FWDDECL
#include <Modloader/app/structs/UberPoolGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPoolGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolGroup_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolGroup_FWDDECL)
#include <Modloader/app/structs/UberPoolGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
