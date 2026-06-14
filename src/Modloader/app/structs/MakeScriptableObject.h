#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MakeScriptableObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MakeScriptableObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_MakeScriptableObject_DEFINED)
#define IL2CPP_STRUCT_MakeScriptableObject_DEFINED
struct MakeScriptableObject__Class;
struct MakeScriptableObject {
    struct MakeScriptableObject__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MakeScriptableObject_FWDDECL)
#define IL2CPP_STRUCT_MakeScriptableObject_FWDDECL
#include <Modloader/app/structs/MakeScriptableObject__Class.h>
#endif
#undef IL2CPP_STRUCT_MakeScriptableObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_MakeScriptableObject_DEFINED) && !defined(IL2CPP_STRUCT_MakeScriptableObject_FWDDECL)
#include <Modloader/app/structs/MakeScriptableObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MakeScriptableObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
