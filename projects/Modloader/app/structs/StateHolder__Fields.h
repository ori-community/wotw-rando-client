#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateHolder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_StateHolder__Fields_DEFINED
struct MoonReference_1_IUberState_;
struct StateMap;
struct __declspec(align(8)) StateHolder__Fields {
    struct MoonReference_1_IUberState_* State;
    struct StateMap* Mapping;
};
#endif
#if !defined(IL2CPP_STRUCT_StateHolder__Fields_FWDDECL)
#define IL2CPP_STRUCT_StateHolder__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_IUberState_.h>
#include <Modloader/app/structs/StateMap.h>
#endif
#undef IL2CPP_STRUCT_StateHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateHolder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StateHolder__Fields_FWDDECL)
#include <Modloader/app/structs/StateHolder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateHolder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
