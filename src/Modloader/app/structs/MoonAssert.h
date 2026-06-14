#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAssert_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAssert_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAssert_DEFINED)
#define IL2CPP_STRUCT_MoonAssert_DEFINED
struct MoonAssert__Class;
struct MoonAssert {
    struct MoonAssert__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonAssert_FWDDECL)
#define IL2CPP_STRUCT_MoonAssert_FWDDECL
#include <Modloader/app/structs/MoonAssert__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonAssert_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAssert_DEFINED) && !defined(IL2CPP_STRUCT_MoonAssert_FWDDECL)
#include <Modloader/app/structs/MoonAssert.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAssert.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
