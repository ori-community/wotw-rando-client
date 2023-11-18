#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAntiAliasing_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAntiAliasing_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAntiAliasing_DEFINED)
#define IL2CPP_STRUCT_IAntiAliasing_DEFINED
struct IAntiAliasing__Class;
struct IAntiAliasing {
    struct IAntiAliasing__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAntiAliasing_FWDDECL)
#define IL2CPP_STRUCT_IAntiAliasing_FWDDECL
#include <Modloader/app/structs/IAntiAliasing__Class.h>
#endif
#undef IL2CPP_STRUCT_IAntiAliasing_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAntiAliasing_DEFINED) && !defined(IL2CPP_STRUCT_IAntiAliasing_FWDDECL)
#include <Modloader/app/structs/IAntiAliasing.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAntiAliasing.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
