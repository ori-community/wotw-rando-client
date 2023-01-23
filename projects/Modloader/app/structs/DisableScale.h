#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DisableScale_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DisableScale_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisableScale_DEFINED)
#include <Modloader/app/structs/DisableScale__Fields.h>
#if defined(IL2CPP_STRUCT_DisableScale__Fields_DEFINED)
#define IL2CPP_STRUCT_DisableScale_DEFINED
struct DisableScale__Class;
struct DisableScale {
    struct DisableScale__Class* klass;
    MonitorData* monitor;
    struct DisableScale__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DisableScale_FWDDECL)
#define IL2CPP_STRUCT_DisableScale_FWDDECL
#include <Modloader/app/structs/DisableScale__Class.h>
#endif
#undef IL2CPP_STRUCT_DisableScale_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisableScale_DEFINED) && !defined(IL2CPP_STRUCT_DisableScale_FWDDECL)
#include <Modloader/app/structs/DisableScale.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DisableScale.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
