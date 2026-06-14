#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashOwlState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashOwlState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlState__Fields_DEFINED)
#define IL2CPP_STRUCT_DashOwlState__Fields_DEFINED
struct DashOwlEnemy;
struct __declspec(align(8)) DashOwlState__Fields {
    struct DashOwlEnemy* DashOwl;
};
#endif
#if !defined(IL2CPP_STRUCT_DashOwlState__Fields_FWDDECL)
#define IL2CPP_STRUCT_DashOwlState__Fields_FWDDECL
#include <Modloader/app/structs/DashOwlEnemy.h>
#endif
#undef IL2CPP_STRUCT_DashOwlState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DashOwlState__Fields_FWDDECL)
#include <Modloader/app/structs/DashOwlState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashOwlState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
