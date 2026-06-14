#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CachedButtonInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CachedButtonInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_CachedButtonInput_DEFINED)
#include <Modloader/app/structs/CachedButtonInput__Fields.h>
#if defined(IL2CPP_STRUCT_CachedButtonInput__Fields_DEFINED)
#define IL2CPP_STRUCT_CachedButtonInput_DEFINED
struct CachedButtonInput__Class;
struct CachedButtonInput {
    struct CachedButtonInput__Class* klass;
    MonitorData* monitor;
    struct CachedButtonInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CachedButtonInput_FWDDECL)
#define IL2CPP_STRUCT_CachedButtonInput_FWDDECL
#include <Modloader/app/structs/CachedButtonInput__Class.h>
#endif
#undef IL2CPP_STRUCT_CachedButtonInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_CachedButtonInput_DEFINED) && !defined(IL2CPP_STRUCT_CachedButtonInput_FWDDECL)
#include <Modloader/app/structs/CachedButtonInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CachedButtonInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
