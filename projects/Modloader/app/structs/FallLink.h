#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FallLink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FallLink_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallLink_DEFINED)
#include <Modloader/app/structs/FallLink__Fields.h>
#if defined(IL2CPP_STRUCT_FallLink__Fields_DEFINED)
#define IL2CPP_STRUCT_FallLink_DEFINED
struct FallLink__Class;
struct FallLink {
    struct FallLink__Class* klass;
    MonitorData* monitor;
    struct FallLink__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FallLink_FWDDECL)
#define IL2CPP_STRUCT_FallLink_FWDDECL
#include <Modloader/app/structs/FallLink__Class.h>
#endif
#undef IL2CPP_STRUCT_FallLink_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallLink_DEFINED) && !defined(IL2CPP_STRUCT_FallLink_FWDDECL)
#include <Modloader/app/structs/FallLink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FallLink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
