#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SignatureHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SignatureHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_SignatureHelper_DEFINED)
#define IL2CPP_STRUCT_SignatureHelper_DEFINED
struct SignatureHelper__Class;
struct SignatureHelper {
    struct SignatureHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SignatureHelper_FWDDECL)
#define IL2CPP_STRUCT_SignatureHelper_FWDDECL
#include <Modloader/app/structs/SignatureHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_SignatureHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_SignatureHelper_DEFINED) && !defined(IL2CPP_STRUCT_SignatureHelper_FWDDECL)
#include <Modloader/app/structs/SignatureHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SignatureHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
