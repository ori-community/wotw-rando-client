#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnsortedHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnsortedHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnsortedHelper_DEFINED)
#include <Modloader/app/structs/UnsortedHelper__Fields.h>
#if defined(IL2CPP_STRUCT_UnsortedHelper__Fields_DEFINED)
#define IL2CPP_STRUCT_UnsortedHelper_DEFINED
struct UnsortedHelper__Class;
struct UnsortedHelper {
    struct UnsortedHelper__Class* klass;
    MonitorData* monitor;
    struct UnsortedHelper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnsortedHelper_FWDDECL)
#define IL2CPP_STRUCT_UnsortedHelper_FWDDECL
#include <Modloader/app/structs/UnsortedHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_UnsortedHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnsortedHelper_DEFINED) && !defined(IL2CPP_STRUCT_UnsortedHelper_FWDDECL)
#include <Modloader/app/structs/UnsortedHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnsortedHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
