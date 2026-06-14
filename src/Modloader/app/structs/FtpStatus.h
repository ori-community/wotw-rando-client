#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FtpStatus_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FtpStatus_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpStatus_DEFINED)
#include <Modloader/app/structs/FtpStatus__Fields.h>
#if defined(IL2CPP_STRUCT_FtpStatus__Fields_DEFINED)
#define IL2CPP_STRUCT_FtpStatus_DEFINED
struct FtpStatus__Class;
struct FtpStatus {
    struct FtpStatus__Class* klass;
    MonitorData* monitor;
    struct FtpStatus__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FtpStatus_FWDDECL)
#define IL2CPP_STRUCT_FtpStatus_FWDDECL
#include <Modloader/app/structs/FtpStatus__Class.h>
#endif
#undef IL2CPP_STRUCT_FtpStatus_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpStatus_DEFINED) && !defined(IL2CPP_STRUCT_FtpStatus_FWDDECL)
#include <Modloader/app/structs/FtpStatus.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FtpStatus.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
