#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalHttpHeader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalHttpHeader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalHttpHeader_DEFINED)
#define IL2CPP_STRUCT_XalHttpHeader_DEFINED
struct String;
struct XalHttpHeader {
    struct String* Name;
    struct String* Value;
};
#endif
#if !defined(IL2CPP_STRUCT_XalHttpHeader_FWDDECL)
#define IL2CPP_STRUCT_XalHttpHeader_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XalHttpHeader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalHttpHeader_DEFINED) && !defined(IL2CPP_STRUCT_XalHttpHeader_FWDDECL)
#include <Modloader/app/structs/XalHttpHeader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalHttpHeader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
