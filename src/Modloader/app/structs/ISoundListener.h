#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISoundListener_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISoundListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISoundListener_DEFINED)
#define IL2CPP_STRUCT_ISoundListener_DEFINED
struct ISoundListener__Class;
struct ISoundListener {
    struct ISoundListener__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISoundListener_FWDDECL)
#define IL2CPP_STRUCT_ISoundListener_FWDDECL
#include <Modloader/app/structs/ISoundListener__Class.h>
#endif
#undef IL2CPP_STRUCT_ISoundListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISoundListener_DEFINED) && !defined(IL2CPP_STRUCT_ISoundListener_FWDDECL)
#include <Modloader/app/structs/ISoundListener.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISoundListener.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
