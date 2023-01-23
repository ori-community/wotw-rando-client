#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Joint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Joint_INITIALIZING
#if !defined(IL2CPP_STRUCT_Joint_DEFINED)
#include <Modloader/app/structs/Joint__Fields.h>
#if defined(IL2CPP_STRUCT_Joint__Fields_DEFINED)
#define IL2CPP_STRUCT_Joint_DEFINED
struct Joint__Class;
struct Joint {
    struct Joint__Class* klass;
    MonitorData* monitor;
    struct Joint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Joint_FWDDECL)
#define IL2CPP_STRUCT_Joint_FWDDECL
#include <Modloader/app/structs/Joint__Class.h>
#endif
#undef IL2CPP_STRUCT_Joint_INITIALIZING
#if !defined(IL2CPP_STRUCT_Joint_DEFINED) && !defined(IL2CPP_STRUCT_Joint_FWDDECL)
#include <Modloader/app/structs/Joint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Joint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
