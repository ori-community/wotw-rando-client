#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewDiffgramGen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewDiffgramGen_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewDiffgramGen_DEFINED)
#include <Modloader/app/structs/NewDiffgramGen__Fields.h>
#if defined(IL2CPP_STRUCT_NewDiffgramGen__Fields_DEFINED)
#define IL2CPP_STRUCT_NewDiffgramGen_DEFINED
struct NewDiffgramGen__Class;
struct NewDiffgramGen {
    struct NewDiffgramGen__Class* klass;
    MonitorData* monitor;
    struct NewDiffgramGen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NewDiffgramGen_FWDDECL)
#define IL2CPP_STRUCT_NewDiffgramGen_FWDDECL
#include <Modloader/app/structs/NewDiffgramGen__Class.h>
#endif
#undef IL2CPP_STRUCT_NewDiffgramGen_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewDiffgramGen_DEFINED) && !defined(IL2CPP_STRUCT_NewDiffgramGen_FWDDECL)
#include <Modloader/app/structs/NewDiffgramGen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewDiffgramGen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
