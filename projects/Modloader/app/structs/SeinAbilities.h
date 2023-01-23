#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinAbilities_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinAbilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAbilities_DEFINED)
#include <Modloader/app/structs/SeinAbilities__Fields.h>
#if defined(IL2CPP_STRUCT_SeinAbilities__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinAbilities_DEFINED
struct SeinAbilities__Class;
struct SeinAbilities {
    struct SeinAbilities__Class* klass;
    MonitorData* monitor;
    struct SeinAbilities__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinAbilities_FWDDECL)
#define IL2CPP_STRUCT_SeinAbilities_FWDDECL
#include <Modloader/app/structs/SeinAbilities__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinAbilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAbilities_DEFINED) && !defined(IL2CPP_STRUCT_SeinAbilities_FWDDECL)
#include <Modloader/app/structs/SeinAbilities.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinAbilities.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
