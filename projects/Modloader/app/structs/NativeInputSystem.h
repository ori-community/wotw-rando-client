#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeInputSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeInputSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeInputSystem_DEFINED)
#define IL2CPP_STRUCT_NativeInputSystem_DEFINED
struct NativeInputSystem__Class;
struct NativeInputSystem {
    struct NativeInputSystem__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NativeInputSystem_FWDDECL)
#define IL2CPP_STRUCT_NativeInputSystem_FWDDECL
#include <Modloader/app/structs/NativeInputSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeInputSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeInputSystem_DEFINED) && !defined(IL2CPP_STRUCT_NativeInputSystem_FWDDECL)
#include <Modloader/app/structs/NativeInputSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeInputSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
