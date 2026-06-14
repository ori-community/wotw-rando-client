#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FtpRequestCreator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FtpRequestCreator_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpRequestCreator_DEFINED)
#define IL2CPP_STRUCT_FtpRequestCreator_DEFINED
struct FtpRequestCreator__Class;
struct FtpRequestCreator {
    struct FtpRequestCreator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FtpRequestCreator_FWDDECL)
#define IL2CPP_STRUCT_FtpRequestCreator_FWDDECL
#include <Modloader/app/structs/FtpRequestCreator__Class.h>
#endif
#undef IL2CPP_STRUCT_FtpRequestCreator_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpRequestCreator_DEFINED) && !defined(IL2CPP_STRUCT_FtpRequestCreator_FWDDECL)
#include <Modloader/app/structs/FtpRequestCreator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FtpRequestCreator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
