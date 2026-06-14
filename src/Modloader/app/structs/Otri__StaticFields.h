#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Otri__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Otri__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Otri__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Otri__StaticFields_DEFINED
struct Int32__Array;
struct Otri__StaticFields {
    struct Int32__Array* plus1Mod3;
    struct Int32__Array* minus1Mod3;
};
#endif
#if !defined(IL2CPP_STRUCT_Otri__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Otri__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_Otri__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Otri__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Otri__StaticFields_FWDDECL)
#include <Modloader/app/structs/Otri__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Otri__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
