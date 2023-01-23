#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICharacter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICharacter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICharacter_DEFINED)
#define IL2CPP_STRUCT_ICharacter_DEFINED
struct ICharacter__Class;
struct ICharacter {
    struct ICharacter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICharacter_FWDDECL)
#define IL2CPP_STRUCT_ICharacter_FWDDECL
#include <Modloader/app/structs/ICharacter__Class.h>
#endif
#undef IL2CPP_STRUCT_ICharacter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICharacter_DEFINED) && !defined(IL2CPP_STRUCT_ICharacter_FWDDECL)
#include <Modloader/app/structs/ICharacter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICharacter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
