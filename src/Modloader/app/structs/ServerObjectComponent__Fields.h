#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerObjectComponent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerObjectComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObjectComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerObjectComponent__Fields_DEFINED
struct Object;
struct __declspec(align(8)) ServerObjectComponent__Fields {
    int32_t m_componentID;
    struct Object* m_data;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerObjectComponent__Fields_FWDDECL)
#define IL2CPP_STRUCT_ServerObjectComponent__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_ServerObjectComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObjectComponent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ServerObjectComponent__Fields_FWDDECL)
#include <Modloader/app/structs/ServerObjectComponent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerObjectComponent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
