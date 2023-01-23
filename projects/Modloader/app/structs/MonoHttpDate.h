#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoHttpDate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoHttpDate_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoHttpDate_DEFINED)
#define IL2CPP_STRUCT_MonoHttpDate_DEFINED
struct MonoHttpDate__Class;
struct MonoHttpDate {
    struct MonoHttpDate__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MonoHttpDate_FWDDECL)
#define IL2CPP_STRUCT_MonoHttpDate_FWDDECL
#include <Modloader/app/structs/MonoHttpDate__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoHttpDate_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoHttpDate_DEFINED) && !defined(IL2CPP_STRUCT_MonoHttpDate_FWDDECL)
#include <Modloader/app/structs/MonoHttpDate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoHttpDate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
