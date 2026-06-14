#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinCharacter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinCharacter_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCharacter_DEFINED)
#include <Modloader/app/structs/SeinCharacter__Fields.h>
#if defined(IL2CPP_STRUCT_SeinCharacter__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinCharacter_DEFINED
struct SeinCharacter__Class;
struct SeinCharacter {
    struct SeinCharacter__Class* klass;
    MonitorData* monitor;
    struct SeinCharacter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinCharacter_FWDDECL)
#define IL2CPP_STRUCT_SeinCharacter_FWDDECL
#include <Modloader/app/structs/SeinCharacter__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinCharacter_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCharacter_DEFINED) && !defined(IL2CPP_STRUCT_SeinCharacter_FWDDECL)
#include <Modloader/app/structs/SeinCharacter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinCharacter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
