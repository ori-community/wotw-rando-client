#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleFPS__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleFPS__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleFPS__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SimpleFPS__StaticFields_DEFINED
struct SimpleFPS;
struct Int32__Array;
struct SimpleFPS__StaticFields {
    bool Target120;
    bool UseNewFPSCalculation;
    struct SimpleFPS* Instance;
    struct Int32__Array* numberBits;
    int32_t letterWidth;
    int32_t rows;
    int32_t columns;
    struct Int32__Array* LETTERS;
};
#endif
#if !defined(IL2CPP_STRUCT_SimpleFPS__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SimpleFPS__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/SimpleFPS.h>
#endif
#undef IL2CPP_STRUCT_SimpleFPS__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleFPS__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleFPS__StaticFields_FWDDECL)
#include <Modloader/app/structs/SimpleFPS__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleFPS__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
