#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateDataView_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateDataView_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateDataView_DEFINED)
#include <Modloader/app/structs/UberStateDataView__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateDataView__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateDataView_DEFINED
struct UberStateDataView__Class;
struct UberStateDataView {
    struct UberStateDataView__Class* klass;
    MonitorData* monitor;
    struct UberStateDataView__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateDataView_FWDDECL)
#define IL2CPP_STRUCT_UberStateDataView_FWDDECL
#include <Modloader/app/structs/UberStateDataView__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateDataView_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateDataView_DEFINED) && !defined(IL2CPP_STRUCT_UberStateDataView_FWDDECL)
#include <Modloader/app/structs/UberStateDataView.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateDataView.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
