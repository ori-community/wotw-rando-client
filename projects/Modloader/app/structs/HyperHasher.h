#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HyperHasher_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HyperHasher_INITIALIZING
#if !defined(IL2CPP_STRUCT_HyperHasher_DEFINED)
#define IL2CPP_STRUCT_HyperHasher_DEFINED
struct HyperHasher__Class;
struct HyperHasher {
    struct HyperHasher__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HyperHasher_FWDDECL)
#define IL2CPP_STRUCT_HyperHasher_FWDDECL
#include <Modloader/app/structs/HyperHasher__Class.h>
#endif
#undef IL2CPP_STRUCT_HyperHasher_INITIALIZING
#if !defined(IL2CPP_STRUCT_HyperHasher_DEFINED) && !defined(IL2CPP_STRUCT_HyperHasher_FWDDECL)
#include <Modloader/app/structs/HyperHasher.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HyperHasher.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
