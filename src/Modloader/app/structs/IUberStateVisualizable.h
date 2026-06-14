#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IUberStateVisualizable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IUberStateVisualizable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUberStateVisualizable_DEFINED)
#define IL2CPP_STRUCT_IUberStateVisualizable_DEFINED
struct IUberStateVisualizable__Class;
struct IUberStateVisualizable {
    struct IUberStateVisualizable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IUberStateVisualizable_FWDDECL)
#define IL2CPP_STRUCT_IUberStateVisualizable_FWDDECL
#include <Modloader/app/structs/IUberStateVisualizable__Class.h>
#endif
#undef IL2CPP_STRUCT_IUberStateVisualizable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUberStateVisualizable_DEFINED) && !defined(IL2CPP_STRUCT_IUberStateVisualizable_FWDDECL)
#include <Modloader/app/structs/IUberStateVisualizable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IUberStateVisualizable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
