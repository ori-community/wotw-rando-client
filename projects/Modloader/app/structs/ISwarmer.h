#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISwarmer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISwarmer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISwarmer_DEFINED)
#define IL2CPP_STRUCT_ISwarmer_DEFINED
struct ISwarmer__Class;
struct ISwarmer {
    struct ISwarmer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISwarmer_FWDDECL)
#define IL2CPP_STRUCT_ISwarmer_FWDDECL
#include <Modloader/app/structs/ISwarmer__Class.h>
#endif
#undef IL2CPP_STRUCT_ISwarmer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISwarmer_DEFINED) && !defined(IL2CPP_STRUCT_ISwarmer_FWDDECL)
#include <Modloader/app/structs/ISwarmer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISwarmer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
