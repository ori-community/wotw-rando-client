#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Diff_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Diff_INITIALIZING
#if !defined(IL2CPP_STRUCT_Diff_DEFINED)
#define IL2CPP_STRUCT_Diff_DEFINED
struct Diff__Class;
struct Diff {
    struct Diff__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Diff_FWDDECL)
#define IL2CPP_STRUCT_Diff_FWDDECL
#include <Modloader/app/structs/Diff__Class.h>
#endif
#undef IL2CPP_STRUCT_Diff_INITIALIZING
#if !defined(IL2CPP_STRUCT_Diff_DEFINED) && !defined(IL2CPP_STRUCT_Diff_FWDDECL)
#include <Modloader/app/structs/Diff.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Diff.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
