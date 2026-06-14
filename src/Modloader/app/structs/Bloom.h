#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bloom_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bloom_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bloom_DEFINED)
#include <Modloader/app/structs/Bloom__Fields.h>
#if defined(IL2CPP_STRUCT_Bloom__Fields_DEFINED)
#define IL2CPP_STRUCT_Bloom_DEFINED
struct Bloom__Class;
struct Bloom {
    struct Bloom__Class* klass;
    MonitorData* monitor;
    struct Bloom__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Bloom_FWDDECL)
#define IL2CPP_STRUCT_Bloom_FWDDECL
#include <Modloader/app/structs/Bloom__Class.h>
#endif
#undef IL2CPP_STRUCT_Bloom_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bloom_DEFINED) && !defined(IL2CPP_STRUCT_Bloom_FWDDECL)
#include <Modloader/app/structs/Bloom.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bloom.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
