#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColosseumDisplay_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColosseumDisplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColosseumDisplay_DEFINED)
#include <Modloader/app/structs/ColosseumDisplay__Fields.h>
#if defined(IL2CPP_STRUCT_ColosseumDisplay__Fields_DEFINED)
#define IL2CPP_STRUCT_ColosseumDisplay_DEFINED
struct ColosseumDisplay__Class;
struct ColosseumDisplay {
    struct ColosseumDisplay__Class* klass;
    MonitorData* monitor;
    struct ColosseumDisplay__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColosseumDisplay_FWDDECL)
#define IL2CPP_STRUCT_ColosseumDisplay_FWDDECL
#include <Modloader/app/structs/ColosseumDisplay__Class.h>
#endif
#undef IL2CPP_STRUCT_ColosseumDisplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColosseumDisplay_DEFINED) && !defined(IL2CPP_STRUCT_ColosseumDisplay_FWDDECL)
#include <Modloader/app/structs/ColosseumDisplay.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColosseumDisplay.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
