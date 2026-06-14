#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Constraints_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Constraints_INITIALIZING
#if !defined(IL2CPP_STRUCT_Constraints_DEFINED)
#include <Modloader/app/structs/Constraints__Fields.h>
#if defined(IL2CPP_STRUCT_Constraints__Fields_DEFINED)
#define IL2CPP_STRUCT_Constraints_DEFINED
struct Constraints__Class;
struct Constraints {
    struct Constraints__Class* klass;
    MonitorData* monitor;
    struct Constraints__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Constraints_FWDDECL)
#define IL2CPP_STRUCT_Constraints_FWDDECL
#include <Modloader/app/structs/Constraints__Class.h>
#endif
#undef IL2CPP_STRUCT_Constraints_INITIALIZING
#if !defined(IL2CPP_STRUCT_Constraints_DEFINED) && !defined(IL2CPP_STRUCT_Constraints_FWDDECL)
#include <Modloader/app/structs/Constraints.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Constraints.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
