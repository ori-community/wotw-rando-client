#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMaskable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMaskable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMaskable_DEFINED)
#define IL2CPP_STRUCT_IMaskable_DEFINED
struct IMaskable__Class;
struct IMaskable {
    struct IMaskable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMaskable_FWDDECL)
#define IL2CPP_STRUCT_IMaskable_FWDDECL
#include <Modloader/app/structs/IMaskable__Class.h>
#endif
#undef IL2CPP_STRUCT_IMaskable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMaskable_DEFINED) && !defined(IL2CPP_STRUCT_IMaskable_FWDDECL)
#include <Modloader/app/structs/IMaskable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMaskable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
