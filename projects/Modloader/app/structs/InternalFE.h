#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalFE_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalFE_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalFE_DEFINED)
#include <Modloader/app/structs/InternalFE__Fields.h>
#if defined(IL2CPP_STRUCT_InternalFE__Fields_DEFINED)
#define IL2CPP_STRUCT_InternalFE_DEFINED
struct InternalFE__Class;
struct InternalFE {
    struct InternalFE__Class* klass;
    MonitorData* monitor;
    struct InternalFE__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InternalFE_FWDDECL)
#define IL2CPP_STRUCT_InternalFE_FWDDECL
#include <Modloader/app/structs/InternalFE__Class.h>
#endif
#undef IL2CPP_STRUCT_InternalFE_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalFE_DEFINED) && !defined(IL2CPP_STRUCT_InternalFE_FWDDECL)
#include <Modloader/app/structs/InternalFE.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalFE.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
