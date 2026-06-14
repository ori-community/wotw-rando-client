#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMeshModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMeshModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMeshModifier_DEFINED)
#define IL2CPP_STRUCT_IMeshModifier_DEFINED
struct IMeshModifier__Class;
struct IMeshModifier {
    struct IMeshModifier__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMeshModifier_FWDDECL)
#define IL2CPP_STRUCT_IMeshModifier_FWDDECL
#include <Modloader/app/structs/IMeshModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_IMeshModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMeshModifier_DEFINED) && !defined(IL2CPP_STRUCT_IMeshModifier_FWDDECL)
#include <Modloader/app/structs/IMeshModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMeshModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
