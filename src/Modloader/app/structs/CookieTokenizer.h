#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CookieTokenizer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CookieTokenizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieTokenizer_DEFINED)
#include <Modloader/app/structs/CookieTokenizer__Fields.h>
#if defined(IL2CPP_STRUCT_CookieTokenizer__Fields_DEFINED)
#define IL2CPP_STRUCT_CookieTokenizer_DEFINED
struct CookieTokenizer__Class;
struct CookieTokenizer {
    struct CookieTokenizer__Class* klass;
    MonitorData* monitor;
    struct CookieTokenizer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CookieTokenizer_FWDDECL)
#define IL2CPP_STRUCT_CookieTokenizer_FWDDECL
#include <Modloader/app/structs/CookieTokenizer__Class.h>
#endif
#undef IL2CPP_STRUCT_CookieTokenizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieTokenizer_DEFINED) && !defined(IL2CPP_STRUCT_CookieTokenizer_FWDDECL)
#include <Modloader/app/structs/CookieTokenizer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CookieTokenizer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
