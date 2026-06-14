#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BipedNaming_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BipedNaming_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedNaming_DEFINED)
#define IL2CPP_STRUCT_BipedNaming_DEFINED
struct BipedNaming__Class;
struct BipedNaming {
    struct BipedNaming__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BipedNaming_FWDDECL)
#define IL2CPP_STRUCT_BipedNaming_FWDDECL
#include <Modloader/app/structs/BipedNaming__Class.h>
#endif
#undef IL2CPP_STRUCT_BipedNaming_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedNaming_DEFINED) && !defined(IL2CPP_STRUCT_BipedNaming_FWDDECL)
#include <Modloader/app/structs/BipedNaming.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BipedNaming.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
