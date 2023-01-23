#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonDouble_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonDouble_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDouble_DEFINED)
#include <Modloader/app/structs/MoonDouble__Fields.h>
#if defined(IL2CPP_STRUCT_MoonDouble__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonDouble_DEFINED
struct MoonDouble__Class;
struct MoonDouble {
    struct MoonDouble__Class* klass;
    MonitorData* monitor;
    struct MoonDouble__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonDouble_FWDDECL)
#define IL2CPP_STRUCT_MoonDouble_FWDDECL
#include <Modloader/app/structs/MoonDouble__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonDouble_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDouble_DEFINED) && !defined(IL2CPP_STRUCT_MoonDouble_FWDDECL)
#include <Modloader/app/structs/MoonDouble.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonDouble.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
