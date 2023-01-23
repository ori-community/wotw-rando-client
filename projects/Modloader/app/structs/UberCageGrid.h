#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberCageGrid_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberCageGrid_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberCageGrid_DEFINED)
#include <Modloader/app/structs/UberCageGrid__Fields.h>
#if defined(IL2CPP_STRUCT_UberCageGrid__Fields_DEFINED)
#define IL2CPP_STRUCT_UberCageGrid_DEFINED
struct UberCageGrid__Class;
struct UberCageGrid {
    struct UberCageGrid__Class* klass;
    MonitorData* monitor;
    struct UberCageGrid__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberCageGrid_FWDDECL)
#define IL2CPP_STRUCT_UberCageGrid_FWDDECL
#include <Modloader/app/structs/UberCageGrid__Class.h>
#endif
#undef IL2CPP_STRUCT_UberCageGrid_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberCageGrid_DEFINED) && !defined(IL2CPP_STRUCT_UberCageGrid_FWDDECL)
#include <Modloader/app/structs/UberCageGrid.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberCageGrid.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
