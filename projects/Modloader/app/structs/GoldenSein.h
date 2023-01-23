#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GoldenSein_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GoldenSein_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoldenSein_DEFINED)
#include <Modloader/app/structs/GoldenSein__Fields.h>
#if defined(IL2CPP_STRUCT_GoldenSein__Fields_DEFINED)
#define IL2CPP_STRUCT_GoldenSein_DEFINED
struct GoldenSein__Class;
struct GoldenSein {
    struct GoldenSein__Class* klass;
    MonitorData* monitor;
    struct GoldenSein__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GoldenSein_FWDDECL)
#define IL2CPP_STRUCT_GoldenSein_FWDDECL
#include <Modloader/app/structs/GoldenSein__Class.h>
#endif
#undef IL2CPP_STRUCT_GoldenSein_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoldenSein_DEFINED) && !defined(IL2CPP_STRUCT_GoldenSein_FWDDECL)
#include <Modloader/app/structs/GoldenSein.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GoldenSein.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
