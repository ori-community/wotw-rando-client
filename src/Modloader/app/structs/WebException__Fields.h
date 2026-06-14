#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebException__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebException__Fields_DEFINED)
#include <Modloader/app/structs/InvalidOperationException__Fields.h>
#include <Modloader/app/structs/WebExceptionInternalStatus__Enum.h>
#include <Modloader/app/structs/WebExceptionStatus__Enum.h>
#if defined(IL2CPP_STRUCT_InvalidOperationException__Fields_DEFINED) && defined(IL2CPP_STRUCT_WebExceptionStatus__Enum_DEFINED) && defined(IL2CPP_STRUCT_WebExceptionInternalStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_WebException__Fields_DEFINED
struct WebResponse;
struct WebException__Fields {
    struct InvalidOperationException__Fields _;
    WebExceptionStatus__Enum m_Status;

    struct WebResponse* m_Response;
    WebExceptionInternalStatus__Enum m_InternalStatus;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebException__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebException__Fields_FWDDECL
#include <Modloader/app/structs/WebResponse.h>
#endif
#undef IL2CPP_STRUCT_WebException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebException__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebException__Fields_FWDDECL)
#include <Modloader/app/structs/WebException__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebException__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
