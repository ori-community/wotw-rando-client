#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CachedAxisInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CachedAxisInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_CachedAxisInput_DEFINED)
#include <Modloader/app/structs/CachedAxisInput__Fields.h>
#if defined(IL2CPP_STRUCT_CachedAxisInput__Fields_DEFINED)
#define IL2CPP_STRUCT_CachedAxisInput_DEFINED
struct CachedAxisInput__Class;
struct CachedAxisInput {
    struct CachedAxisInput__Class* klass;
    MonitorData* monitor;
    struct CachedAxisInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CachedAxisInput_FWDDECL)
#define IL2CPP_STRUCT_CachedAxisInput_FWDDECL
#include <Modloader/app/structs/CachedAxisInput__Class.h>
#endif
#undef IL2CPP_STRUCT_CachedAxisInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_CachedAxisInput_DEFINED) && !defined(IL2CPP_STRUCT_CachedAxisInput_FWDDECL)
#include <Modloader/app/structs/CachedAxisInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CachedAxisInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
