#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BipedReferences_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BipedReferences_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedReferences_DEFINED)
#include <Modloader/app/structs/BipedReferences__Fields.h>
#if defined(IL2CPP_STRUCT_BipedReferences__Fields_DEFINED)
#define IL2CPP_STRUCT_BipedReferences_DEFINED
struct BipedReferences__Class;
struct BipedReferences {
    struct BipedReferences__Class* klass;
    MonitorData* monitor;
    struct BipedReferences__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BipedReferences_FWDDECL)
#define IL2CPP_STRUCT_BipedReferences_FWDDECL
#include <Modloader/app/structs/BipedReferences__Class.h>
#endif
#undef IL2CPP_STRUCT_BipedReferences_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedReferences_DEFINED) && !defined(IL2CPP_STRUCT_BipedReferences_FWDDECL)
#include <Modloader/app/structs/BipedReferences.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BipedReferences.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
