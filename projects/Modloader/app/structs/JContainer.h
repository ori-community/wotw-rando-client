#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JContainer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_JContainer_DEFINED)
#include <Modloader/app/structs/JContainer__Fields.h>
#if defined(IL2CPP_STRUCT_JContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_JContainer_DEFINED
struct JContainer__Class;
struct JContainer {
    struct JContainer__Class* klass;
    MonitorData* monitor;
    struct JContainer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JContainer_FWDDECL)
#define IL2CPP_STRUCT_JContainer_FWDDECL
#include <Modloader/app/structs/JContainer__Class.h>
#endif
#undef IL2CPP_STRUCT_JContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_JContainer_DEFINED) && !defined(IL2CPP_STRUCT_JContainer_FWDDECL)
#include <Modloader/app/structs/JContainer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JContainer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
