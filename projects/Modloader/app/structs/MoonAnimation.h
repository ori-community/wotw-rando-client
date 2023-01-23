#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimation_DEFINED)
#include <Modloader/app/structs/MoonAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_MoonAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonAnimation_DEFINED
struct MoonAnimation__Class;
struct MoonAnimation {
    struct MoonAnimation__Class* klass;
    MonitorData* monitor;
    struct MoonAnimation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimation_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimation_FWDDECL
#include <Modloader/app/structs/MoonAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimation_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimation_FWDDECL)
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
