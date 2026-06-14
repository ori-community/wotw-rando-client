#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Guid__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Guid__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Guid__StaticFields_DEFINED)
#include <Modloader/app/structs/Guid.h>
#if defined(IL2CPP_STRUCT_Guid_DEFINED)
#define IL2CPP_STRUCT_Guid__StaticFields_DEFINED
struct Object;
struct RandomNumberGenerator;
struct Guid__StaticFields {
    struct Guid Empty;
    struct Object* _rngAccess;
    struct RandomNumberGenerator* _rng;
    struct RandomNumberGenerator* _fastRng;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Guid__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Guid__StaticFields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RandomNumberGenerator.h>
#endif
#undef IL2CPP_STRUCT_Guid__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Guid__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Guid__StaticFields_FWDDECL)
#include <Modloader/app/structs/Guid__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Guid__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
