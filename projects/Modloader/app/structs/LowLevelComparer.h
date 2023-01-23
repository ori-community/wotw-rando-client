#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LowLevelComparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LowLevelComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_LowLevelComparer_DEFINED)
#define IL2CPP_STRUCT_LowLevelComparer_DEFINED
struct LowLevelComparer__Class;
struct LowLevelComparer {
    struct LowLevelComparer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LowLevelComparer_FWDDECL)
#define IL2CPP_STRUCT_LowLevelComparer_FWDDECL
#include <Modloader/app/structs/LowLevelComparer__Class.h>
#endif
#undef IL2CPP_STRUCT_LowLevelComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_LowLevelComparer_DEFINED) && !defined(IL2CPP_STRUCT_LowLevelComparer_FWDDECL)
#include <Modloader/app/structs/LowLevelComparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LowLevelComparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
