#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceBaseState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceBaseState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceBaseState__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceBaseState__Fields_DEFINED
struct RaceSystem;
struct __declspec(align(8)) RaceBaseState__Fields {
    struct RaceSystem* m_raceSystem;
};
#endif
#if !defined(IL2CPP_STRUCT_RaceBaseState__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceBaseState__Fields_FWDDECL
#include <Modloader/app/structs/RaceSystem.h>
#endif
#undef IL2CPP_STRUCT_RaceBaseState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceBaseState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceBaseState__Fields_FWDDECL)
#include <Modloader/app/structs/RaceBaseState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceBaseState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
