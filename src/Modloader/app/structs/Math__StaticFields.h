#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Math__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Math__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Math__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Math__StaticFields_DEFINED
struct Double__Array;
struct Math__StaticFields {
    double doubleRoundLimit;
    struct Double__Array* roundPower10Double;
};
#endif
#if !defined(IL2CPP_STRUCT_Math__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Math__StaticFields_FWDDECL
#include <Modloader/app/structs/Double__Array.h>
#endif
#undef IL2CPP_STRUCT_Math__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Math__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Math__StaticFields_FWDDECL)
#include <Modloader/app/structs/Math__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Math__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
