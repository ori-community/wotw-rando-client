#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectProgress_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectProgress_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectProgress_DEFINED)
#include <Modloader/app/structs/ObjectProgress__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectProgress__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectProgress_DEFINED
struct ObjectProgress__Class;
struct ObjectProgress {
    struct ObjectProgress__Class* klass;
    MonitorData* monitor;
    struct ObjectProgress__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectProgress_FWDDECL)
#define IL2CPP_STRUCT_ObjectProgress_FWDDECL
#include <Modloader/app/structs/ObjectProgress__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectProgress_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectProgress_DEFINED) && !defined(IL2CPP_STRUCT_ObjectProgress_FWDDECL)
#include <Modloader/app/structs/ObjectProgress.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectProgress.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
