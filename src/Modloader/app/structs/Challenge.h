#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Challenge_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Challenge_INITIALIZING
#if !defined(IL2CPP_STRUCT_Challenge_DEFINED)
#include <Modloader/app/structs/Challenge__Fields.h>
#if defined(IL2CPP_STRUCT_Challenge__Fields_DEFINED)
#define IL2CPP_STRUCT_Challenge_DEFINED
struct Challenge__Class;
struct Challenge {
    struct Challenge__Class* klass;
    MonitorData* monitor;
    struct Challenge__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Challenge_FWDDECL)
#define IL2CPP_STRUCT_Challenge_FWDDECL
#include <Modloader/app/structs/Challenge__Class.h>
#endif
#undef IL2CPP_STRUCT_Challenge_INITIALIZING
#if !defined(IL2CPP_STRUCT_Challenge_DEFINED) && !defined(IL2CPP_STRUCT_Challenge_FWDDECL)
#include <Modloader/app/structs/Challenge.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Challenge.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
