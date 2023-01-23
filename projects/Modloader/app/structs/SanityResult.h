#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SanityResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SanityResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SanityResult_DEFINED)
#include <Modloader/app/structs/SanityResult__Fields.h>
#if defined(IL2CPP_STRUCT_SanityResult__Fields_DEFINED)
#define IL2CPP_STRUCT_SanityResult_DEFINED
struct SanityResult__Class;
struct SanityResult {
    struct SanityResult__Class* klass;
    MonitorData* monitor;
    struct SanityResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SanityResult_FWDDECL)
#define IL2CPP_STRUCT_SanityResult_FWDDECL
#include <Modloader/app/structs/SanityResult__Class.h>
#endif
#undef IL2CPP_STRUCT_SanityResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SanityResult_DEFINED) && !defined(IL2CPP_STRUCT_SanityResult_FWDDECL)
#include <Modloader/app/structs/SanityResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SanityResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
