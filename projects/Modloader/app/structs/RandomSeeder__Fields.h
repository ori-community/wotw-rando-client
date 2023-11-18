#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RandomSeeder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RandomSeeder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomSeeder__Fields_DEFINED)
#define IL2CPP_STRUCT_RandomSeeder__Fields_DEFINED
struct Random;
struct __declspec(align(8)) RandomSeeder__Fields {
    int32_t m_seed;
    struct Random* random;
};
#endif
#if !defined(IL2CPP_STRUCT_RandomSeeder__Fields_FWDDECL)
#define IL2CPP_STRUCT_RandomSeeder__Fields_FWDDECL
#include <Modloader/app/structs/Random.h>
#endif
#undef IL2CPP_STRUCT_RandomSeeder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomSeeder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RandomSeeder__Fields_FWDDECL)
#include <Modloader/app/structs/RandomSeeder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RandomSeeder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
