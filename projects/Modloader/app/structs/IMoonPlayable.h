#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMoonPlayable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMoonPlayable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonPlayable_DEFINED)
#define IL2CPP_STRUCT_IMoonPlayable_DEFINED
struct IMoonPlayable__Class;
struct IMoonPlayable {
    struct IMoonPlayable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMoonPlayable_FWDDECL)
#define IL2CPP_STRUCT_IMoonPlayable_FWDDECL
#include <Modloader/app/structs/IMoonPlayable__Class.h>
#endif
#undef IL2CPP_STRUCT_IMoonPlayable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonPlayable_DEFINED) && !defined(IL2CPP_STRUCT_IMoonPlayable_FWDDECL)
#include <Modloader/app/structs/IMoonPlayable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMoonPlayable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
