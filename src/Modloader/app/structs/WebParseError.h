#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebParseError_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebParseError_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebParseError_DEFINED)
#include <Modloader/app/structs/WebParseErrorCode__Enum.h>
#include <Modloader/app/structs/WebParseErrorSection__Enum.h>
#if defined(IL2CPP_STRUCT_WebParseErrorSection__Enum_DEFINED) && defined(IL2CPP_STRUCT_WebParseErrorCode__Enum_DEFINED)
#define IL2CPP_STRUCT_WebParseError_DEFINED
struct WebParseError {
    WebParseErrorSection__Enum Section;

    WebParseErrorCode__Enum Code;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebParseError_FWDDECL)
#define IL2CPP_STRUCT_WebParseError_FWDDECL
#endif
#undef IL2CPP_STRUCT_WebParseError_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebParseError_DEFINED) && !defined(IL2CPP_STRUCT_WebParseError_FWDDECL)
#include <Modloader/app/structs/WebParseError.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebParseError.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
