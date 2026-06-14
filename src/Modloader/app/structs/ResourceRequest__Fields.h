#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourceRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourceRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceRequest__Fields_DEFINED)
#include <Modloader/app/structs/AsyncOperation_1__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncOperation_1__Fields_DEFINED)
#define IL2CPP_STRUCT_ResourceRequest__Fields_DEFINED
struct String;
struct Type;
struct ResourceRequest__Fields {
    struct AsyncOperation_1__Fields _;
    struct String* m_Path;
    struct Type* m_Type;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResourceRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_ResourceRequest__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ResourceRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ResourceRequest__Fields_FWDDECL)
#include <Modloader/app/structs/ResourceRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourceRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
