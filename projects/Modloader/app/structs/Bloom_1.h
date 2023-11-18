#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bloom_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bloom_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bloom_1_DEFINED)
#include <Modloader/app/structs/Bloom_1__Fields.h>
#if defined(IL2CPP_STRUCT_Bloom_1__Fields_DEFINED)
#define IL2CPP_STRUCT_Bloom_1_DEFINED
struct Bloom_1__Class;
struct Bloom_1 {
    struct Bloom_1__Class* klass;
    MonitorData* monitor;
    struct Bloom_1__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Bloom_1_FWDDECL)
#define IL2CPP_STRUCT_Bloom_1_FWDDECL
#include <Modloader/app/structs/Bloom_1__Class.h>
#endif
#undef IL2CPP_STRUCT_Bloom_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bloom_1_DEFINED) && !defined(IL2CPP_STRUCT_Bloom_1_FWDDECL)
#include <Modloader/app/structs/Bloom_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bloom_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
