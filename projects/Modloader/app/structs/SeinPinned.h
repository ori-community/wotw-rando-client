#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPinned_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPinned_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPinned_DEFINED)
#include <Modloader/app/structs/SeinPinned__Fields.h>
#if defined(IL2CPP_STRUCT_SeinPinned__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinPinned_DEFINED
struct SeinPinned__Class;
struct SeinPinned {
    struct SeinPinned__Class* klass;
    MonitorData* monitor;
    struct SeinPinned__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinPinned_FWDDECL)
#define IL2CPP_STRUCT_SeinPinned_FWDDECL
#include <Modloader/app/structs/SeinPinned__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinPinned_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPinned_DEFINED) && !defined(IL2CPP_STRUCT_SeinPinned_FWDDECL)
#include <Modloader/app/structs/SeinPinned.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPinned.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
