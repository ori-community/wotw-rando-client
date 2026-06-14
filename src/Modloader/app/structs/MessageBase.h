#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBase_DEFINED)
#include <Modloader/app/structs/MessageBase__Fields.h>
#if defined(IL2CPP_STRUCT_MessageBase__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageBase_DEFINED
struct MessageBase__Class;
struct MessageBase {
    struct MessageBase__Class* klass;
    MonitorData* monitor;
    struct MessageBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageBase_FWDDECL)
#define IL2CPP_STRUCT_MessageBase_FWDDECL
#include <Modloader/app/structs/MessageBase__Class.h>
#endif
#undef IL2CPP_STRUCT_MessageBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBase_DEFINED) && !defined(IL2CPP_STRUCT_MessageBase_FWDDECL)
#include <Modloader/app/structs/MessageBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
