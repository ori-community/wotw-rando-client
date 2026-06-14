#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RC2Transform__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RC2Transform__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC2Transform__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RC2Transform__StaticFields_DEFINED
struct Byte__Array;
struct RC2Transform__StaticFields {
    struct Byte__Array* pitable;
};
#endif
#if !defined(IL2CPP_STRUCT_RC2Transform__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RC2Transform__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_RC2Transform__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC2Transform__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RC2Transform__StaticFields_FWDDECL)
#include <Modloader/app/structs/RC2Transform__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RC2Transform__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
