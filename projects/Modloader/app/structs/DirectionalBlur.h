#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DirectionalBlur_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DirectionalBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectionalBlur_DEFINED)
#include <Modloader/app/structs/DirectionalBlur__Fields.h>
#if defined(IL2CPP_STRUCT_DirectionalBlur__Fields_DEFINED)
#define IL2CPP_STRUCT_DirectionalBlur_DEFINED
struct DirectionalBlur__Class;
struct DirectionalBlur {
    struct DirectionalBlur__Class* klass;
    MonitorData* monitor;
    struct DirectionalBlur__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DirectionalBlur_FWDDECL)
#define IL2CPP_STRUCT_DirectionalBlur_FWDDECL
#include <Modloader/app/structs/DirectionalBlur__Class.h>
#endif
#undef IL2CPP_STRUCT_DirectionalBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectionalBlur_DEFINED) && !defined(IL2CPP_STRUCT_DirectionalBlur_FWDDECL)
#include <Modloader/app/structs/DirectionalBlur.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DirectionalBlur.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
