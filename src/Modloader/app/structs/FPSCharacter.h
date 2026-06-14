#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSCharacter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSCharacter_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSCharacter_DEFINED)
#include <Modloader/app/structs/FPSCharacter__Fields.h>
#if defined(IL2CPP_STRUCT_FPSCharacter__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSCharacter_DEFINED
struct FPSCharacter__Class;
struct FPSCharacter {
    struct FPSCharacter__Class* klass;
    MonitorData* monitor;
    struct FPSCharacter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSCharacter_FWDDECL)
#define IL2CPP_STRUCT_FPSCharacter_FWDDECL
#include <Modloader/app/structs/FPSCharacter__Class.h>
#endif
#undef IL2CPP_STRUCT_FPSCharacter_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSCharacter_DEFINED) && !defined(IL2CPP_STRUCT_FPSCharacter_FWDDECL)
#include <Modloader/app/structs/FPSCharacter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSCharacter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
