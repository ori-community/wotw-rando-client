#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Animation_Enumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Animation_Enumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_Animation_Enumerator_DEFINED)
#include <Modloader/app/structs/Animation_Enumerator__Fields.h>
#if defined(IL2CPP_STRUCT_Animation_Enumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_Animation_Enumerator_DEFINED
struct Animation_Enumerator__Class;
struct Animation_Enumerator {
    struct Animation_Enumerator__Class* klass;
    MonitorData* monitor;
    struct Animation_Enumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Animation_Enumerator_FWDDECL)
#define IL2CPP_STRUCT_Animation_Enumerator_FWDDECL
#include <Modloader/app/structs/Animation_Enumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_Animation_Enumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_Animation_Enumerator_DEFINED) && !defined(IL2CPP_STRUCT_Animation_Enumerator_FWDDECL)
#include <Modloader/app/structs/Animation_Enumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Animation_Enumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
