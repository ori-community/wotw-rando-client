#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAnimatedValueListener_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAnimatedValueListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAnimatedValueListener_DEFINED)
#define IL2CPP_STRUCT_IAnimatedValueListener_DEFINED
struct IAnimatedValueListener__Class;
struct IAnimatedValueListener {
    struct IAnimatedValueListener__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAnimatedValueListener_FWDDECL)
#define IL2CPP_STRUCT_IAnimatedValueListener_FWDDECL
#include <Modloader/app/structs/IAnimatedValueListener__Class.h>
#endif
#undef IL2CPP_STRUCT_IAnimatedValueListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAnimatedValueListener_DEFINED) && !defined(IL2CPP_STRUCT_IAnimatedValueListener_FWDDECL)
#include <Modloader/app/structs/IAnimatedValueListener.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAnimatedValueListener.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
