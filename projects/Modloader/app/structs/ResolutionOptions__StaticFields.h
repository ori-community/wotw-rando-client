#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResolutionOptions__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResolutionOptions__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResolutionOptions__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ResolutionOptions__StaticFields_DEFINED
struct Vector4__Array;
struct Int32__Array__Array;
struct ResolutionOptions__StaticFields {
    struct Vector4__Array* s_allowedAspectRatios;
    struct Int32__Array__Array* s_extraResolutions;
};
#endif
#if !defined(IL2CPP_STRUCT_ResolutionOptions__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ResolutionOptions__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array__Array.h>
#include <Modloader/app/structs/Vector4__Array.h>
#endif
#undef IL2CPP_STRUCT_ResolutionOptions__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResolutionOptions__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ResolutionOptions__StaticFields_FWDDECL)
#include <Modloader/app/structs/ResolutionOptions__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResolutionOptions__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
