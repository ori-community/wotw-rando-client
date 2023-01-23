#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MurmurHash2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MurmurHash2_INITIALIZING
#if !defined(IL2CPP_STRUCT_MurmurHash2_DEFINED)
#define IL2CPP_STRUCT_MurmurHash2_DEFINED
struct MurmurHash2__Class;
struct MurmurHash2 {
    struct MurmurHash2__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MurmurHash2_FWDDECL)
#define IL2CPP_STRUCT_MurmurHash2_FWDDECL
#include <Modloader/app/structs/MurmurHash2__Class.h>
#endif
#undef IL2CPP_STRUCT_MurmurHash2_INITIALIZING
#if !defined(IL2CPP_STRUCT_MurmurHash2_DEFINED) && !defined(IL2CPP_STRUCT_MurmurHash2_FWDDECL)
#include <Modloader/app/structs/MurmurHash2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MurmurHash2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
