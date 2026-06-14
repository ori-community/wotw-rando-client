#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SweepLine_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SweepLine_INITIALIZING
#if !defined(IL2CPP_STRUCT_SweepLine_DEFINED)
#include <Modloader/app/structs/SweepLine__Fields.h>
#if defined(IL2CPP_STRUCT_SweepLine__Fields_DEFINED)
#define IL2CPP_STRUCT_SweepLine_DEFINED
struct SweepLine__Class;
struct SweepLine {
    struct SweepLine__Class* klass;
    MonitorData* monitor;
    struct SweepLine__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SweepLine_FWDDECL)
#define IL2CPP_STRUCT_SweepLine_FWDDECL
#include <Modloader/app/structs/SweepLine__Class.h>
#endif
#undef IL2CPP_STRUCT_SweepLine_INITIALIZING
#if !defined(IL2CPP_STRUCT_SweepLine_DEFINED) && !defined(IL2CPP_STRUCT_SweepLine_FWDDECL)
#include <Modloader/app/structs/SweepLine.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SweepLine.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
