#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriCellBar_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriCellBar_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriCellBar_DEFINED)
#include <Modloader/app/structs/OriCellBar__Fields.h>
#if defined(IL2CPP_STRUCT_OriCellBar__Fields_DEFINED)
#define IL2CPP_STRUCT_OriCellBar_DEFINED
struct OriCellBar__Class;
struct OriCellBar {
    struct OriCellBar__Class* klass;
    MonitorData* monitor;
    struct OriCellBar__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriCellBar_FWDDECL)
#define IL2CPP_STRUCT_OriCellBar_FWDDECL
#include <Modloader/app/structs/OriCellBar__Class.h>
#endif
#undef IL2CPP_STRUCT_OriCellBar_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriCellBar_DEFINED) && !defined(IL2CPP_STRUCT_OriCellBar_FWDDECL)
#include <Modloader/app/structs/OriCellBar.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriCellBar.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
