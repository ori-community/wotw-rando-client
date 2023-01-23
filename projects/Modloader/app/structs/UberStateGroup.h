#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateGroup_DEFINED)
#include <Modloader/app/structs/UberStateGroup__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateGroup_DEFINED
struct UberStateGroup__Class;
struct UberStateGroup {
    struct UberStateGroup__Class* klass;
    MonitorData* monitor;
    struct UberStateGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateGroup_FWDDECL)
#define IL2CPP_STRUCT_UberStateGroup_FWDDECL
#include <Modloader/app/structs/UberStateGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateGroup_DEFINED) && !defined(IL2CPP_STRUCT_UberStateGroup_FWDDECL)
#include <Modloader/app/structs/UberStateGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
