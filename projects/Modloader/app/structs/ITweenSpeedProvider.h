#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITweenSpeedProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITweenSpeedProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITweenSpeedProvider_DEFINED)
#define IL2CPP_STRUCT_ITweenSpeedProvider_DEFINED
struct ITweenSpeedProvider__Class;
struct ITweenSpeedProvider {
    struct ITweenSpeedProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITweenSpeedProvider_FWDDECL)
#define IL2CPP_STRUCT_ITweenSpeedProvider_FWDDECL
#include <Modloader/app/structs/ITweenSpeedProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_ITweenSpeedProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITweenSpeedProvider_DEFINED) && !defined(IL2CPP_STRUCT_ITweenSpeedProvider_FWDDECL)
#include <Modloader/app/structs/ITweenSpeedProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITweenSpeedProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
