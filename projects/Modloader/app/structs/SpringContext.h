#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpringContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpringContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringContext_DEFINED)
#define IL2CPP_STRUCT_SpringContext_DEFINED
struct GameObject;
struct SpringContext {
    struct GameObject* LastObject;
};
#endif
#if !defined(IL2CPP_STRUCT_SpringContext_FWDDECL)
#define IL2CPP_STRUCT_SpringContext_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_SpringContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringContext_DEFINED) && !defined(IL2CPP_STRUCT_SpringContext_FWDDECL)
#include <Modloader/app/structs/SpringContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpringContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
