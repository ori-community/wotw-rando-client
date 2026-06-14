#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HideInInspector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HideInInspector_INITIALIZING
#if !defined(IL2CPP_STRUCT_HideInInspector_DEFINED)
#define IL2CPP_STRUCT_HideInInspector_DEFINED
struct HideInInspector__Class;
struct HideInInspector {
    struct HideInInspector__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HideInInspector_FWDDECL)
#define IL2CPP_STRUCT_HideInInspector_FWDDECL
#include <Modloader/app/structs/HideInInspector__Class.h>
#endif
#undef IL2CPP_STRUCT_HideInInspector_INITIALIZING
#if !defined(IL2CPP_STRUCT_HideInInspector_DEFINED) && !defined(IL2CPP_STRUCT_HideInInspector_FWDDECL)
#include <Modloader/app/structs/HideInInspector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HideInInspector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
