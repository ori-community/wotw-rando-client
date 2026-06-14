#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bloom_Settings__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bloom_Settings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bloom_Settings__Boxed_DEFINED)
#include <Modloader/app/structs/Bloom_Settings.h>
#if defined(IL2CPP_STRUCT_Bloom_Settings_DEFINED)
#define IL2CPP_STRUCT_Bloom_Settings__Boxed_DEFINED
struct Bloom_Settings__Class;
struct Bloom_Settings__Boxed {
    struct Bloom_Settings__Class* klass;
    MonitorData* monitor;
    struct Bloom_Settings fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Bloom_Settings__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Bloom_Settings__Boxed_FWDDECL
#include <Modloader/app/structs/Bloom_Settings__Class.h>
#endif
#undef IL2CPP_STRUCT_Bloom_Settings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bloom_Settings__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Bloom_Settings__Boxed_FWDDECL)
#include <Modloader/app/structs/Bloom_Settings__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bloom_Settings__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
