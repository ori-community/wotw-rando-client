#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PersistentCall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PersistentCall_INITIALIZING
#if !defined(IL2CPP_STRUCT_PersistentCall_DEFINED)
#include <Modloader/app/structs/PersistentCall__Fields.h>
#if defined(IL2CPP_STRUCT_PersistentCall__Fields_DEFINED)
#define IL2CPP_STRUCT_PersistentCall_DEFINED
struct PersistentCall__Class;
struct PersistentCall {
    struct PersistentCall__Class* klass;
    MonitorData* monitor;
    struct PersistentCall__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PersistentCall_FWDDECL)
#define IL2CPP_STRUCT_PersistentCall_FWDDECL
#include <Modloader/app/structs/PersistentCall__Class.h>
#endif
#undef IL2CPP_STRUCT_PersistentCall_INITIALIZING
#if !defined(IL2CPP_STRUCT_PersistentCall_DEFINED) && !defined(IL2CPP_STRUCT_PersistentCall_FWDDECL)
#include <Modloader/app/structs/PersistentCall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PersistentCall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
