#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MethodBody_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MethodBody_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodBody_DEFINED)
#include <Modloader/app/structs/MethodBody__Fields.h>
#if defined(IL2CPP_STRUCT_MethodBody__Fields_DEFINED)
#define IL2CPP_STRUCT_MethodBody_DEFINED
struct MethodBody__Class;
struct MethodBody {
    struct MethodBody__Class* klass;
    MonitorData* monitor;
    struct MethodBody__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MethodBody_FWDDECL)
#define IL2CPP_STRUCT_MethodBody_FWDDECL
#include <Modloader/app/structs/MethodBody__Class.h>
#endif
#undef IL2CPP_STRUCT_MethodBody_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodBody_DEFINED) && !defined(IL2CPP_STRUCT_MethodBody_FWDDECL)
#include <Modloader/app/structs/MethodBody.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MethodBody.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
