#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NetworkTest__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NetworkTest__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetworkTest__StaticFields_DEFINED)
#define IL2CPP_STRUCT_NetworkTest__StaticFields_DEFINED
struct String;
struct NetworkTest__StaticFields {
    struct String* HOST;
    struct String* headerType;
    struct String* headerTypeField;
    struct String* XSTSToken;
    struct String* m_fullUrl;
};
#endif
#if !defined(IL2CPP_STRUCT_NetworkTest__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_NetworkTest__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NetworkTest__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetworkTest__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_NetworkTest__StaticFields_FWDDECL)
#include <Modloader/app/structs/NetworkTest__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NetworkTest__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
