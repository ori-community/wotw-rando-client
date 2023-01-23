#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateValueGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateValueGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateValueGroup_DEFINED)
#include <Modloader/app/structs/UberStateValueGroup__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateValueGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateValueGroup_DEFINED
struct UberStateValueGroup__Class;
struct UberStateValueGroup {
    struct UberStateValueGroup__Class* klass;
    MonitorData* monitor;
    struct UberStateValueGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateValueGroup_FWDDECL)
#define IL2CPP_STRUCT_UberStateValueGroup_FWDDECL
#include <Modloader/app/structs/UberStateValueGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateValueGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateValueGroup_DEFINED) && !defined(IL2CPP_STRUCT_UberStateValueGroup_FWDDECL)
#include <Modloader/app/structs/UberStateValueGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateValueGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
