#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumpSustainHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumpSustainHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpSustainHelper_DEFINED)
#include <Modloader/app/structs/JumpSustainHelper__Fields.h>
#if defined(IL2CPP_STRUCT_JumpSustainHelper__Fields_DEFINED)
#define IL2CPP_STRUCT_JumpSustainHelper_DEFINED
struct JumpSustainHelper__Class;
struct JumpSustainHelper {
    struct JumpSustainHelper__Class* klass;
    MonitorData* monitor;
    struct JumpSustainHelper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumpSustainHelper_FWDDECL)
#define IL2CPP_STRUCT_JumpSustainHelper_FWDDECL
#include <Modloader/app/structs/JumpSustainHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_JumpSustainHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpSustainHelper_DEFINED) && !defined(IL2CPP_STRUCT_JumpSustainHelper_FWDDECL)
#include <Modloader/app/structs/JumpSustainHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumpSustainHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
