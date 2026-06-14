#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Quads_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Quads_INITIALIZING
#if !defined(IL2CPP_STRUCT_Quads_DEFINED)
#define IL2CPP_STRUCT_Quads_DEFINED
struct Quads__Class;
struct Quads {
    struct Quads__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Quads_FWDDECL)
#define IL2CPP_STRUCT_Quads_FWDDECL
#include <Modloader/app/structs/Quads__Class.h>
#endif
#undef IL2CPP_STRUCT_Quads_INITIALIZING
#if !defined(IL2CPP_STRUCT_Quads_DEFINED) && !defined(IL2CPP_STRUCT_Quads_FWDDECL)
#include <Modloader/app/structs/Quads.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Quads.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
