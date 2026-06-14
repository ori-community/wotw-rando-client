#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GLHelper__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GLHelper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GLHelper__StaticFields_DEFINED)
#define IL2CPP_STRUCT_GLHelper__StaticFields_DEFINED
struct Int32__Array;
struct GLHelper__StaticFields {
    struct Int32__Array* numberBits;
    int32_t letterWidth;
    int32_t rows;
    int32_t columns;
    struct Int32__Array* LETTERS;
};
#endif
#if !defined(IL2CPP_STRUCT_GLHelper__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GLHelper__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_GLHelper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GLHelper__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GLHelper__StaticFields_FWDDECL)
#include <Modloader/app/structs/GLHelper__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GLHelper__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
