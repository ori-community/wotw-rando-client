#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonLong_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonLong_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonLong_DEFINED)
#include <Modloader/app/structs/MoonLong__Fields.h>
#if defined(IL2CPP_STRUCT_MoonLong__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonLong_DEFINED
struct MoonLong__Class;
struct MoonLong {
    struct MoonLong__Class* klass;
    MonitorData* monitor;
    struct MoonLong__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonLong_FWDDECL)
#define IL2CPP_STRUCT_MoonLong_FWDDECL
#include <Modloader/app/structs/MoonLong__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonLong_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonLong_DEFINED) && !defined(IL2CPP_STRUCT_MoonLong_FWDDECL)
#include <Modloader/app/structs/MoonLong.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonLong.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
