#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FtpStatus__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FtpStatus__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpStatus__Fields_DEFINED)
#include <Modloader/app/structs/FtpStatusCode__Enum.h>
#if defined(IL2CPP_STRUCT_FtpStatusCode__Enum_DEFINED)
#define IL2CPP_STRUCT_FtpStatus__Fields_DEFINED
struct String;
struct __declspec(align(8)) FtpStatus__Fields {
    FtpStatusCode__Enum statusCode;

    struct String* statusDescription;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FtpStatus__Fields_FWDDECL)
#define IL2CPP_STRUCT_FtpStatus__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_FtpStatus__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpStatus__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FtpStatus__Fields_FWDDECL)
#include <Modloader/app/structs/FtpStatus__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FtpStatus__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
