#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalVariables_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalVariables_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalVariables_DEFINED)
#include <Modloader/app/structs/LocalVariables__Fields.h>
#if defined(IL2CPP_STRUCT_LocalVariables__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalVariables_DEFINED
struct LocalVariables__Class;
struct LocalVariables {
    struct LocalVariables__Class* klass;
    MonitorData* monitor;
    struct LocalVariables__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocalVariables_FWDDECL)
#define IL2CPP_STRUCT_LocalVariables_FWDDECL
#include <Modloader/app/structs/LocalVariables__Class.h>
#endif
#undef IL2CPP_STRUCT_LocalVariables_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalVariables_DEFINED) && !defined(IL2CPP_STRUCT_LocalVariables_FWDDECL)
#include <Modloader/app/structs/LocalVariables.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalVariables.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
