#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ephemeron_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ephemeron_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ephemeron_DEFINED)
#define IL2CPP_STRUCT_Ephemeron_DEFINED
struct Object;
struct Ephemeron {
    struct Object* key;
    struct Object* value;
};
#endif
#if !defined(IL2CPP_STRUCT_Ephemeron_FWDDECL)
#define IL2CPP_STRUCT_Ephemeron_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Ephemeron_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ephemeron_DEFINED) && !defined(IL2CPP_STRUCT_Ephemeron_FWDDECL)
#include <Modloader/app/structs/Ephemeron.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ephemeron.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
