#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SearchResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SearchResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SearchResult__Fields_DEFINED)
#define IL2CPP_STRUCT_SearchResult__Fields_DEFINED
struct String;
struct Win32Native_WIN32_FIND_DATA;
struct __declspec(align(8)) SearchResult__Fields {
    struct String* fullPath;
    struct String* userPath;
    struct Win32Native_WIN32_FIND_DATA* findData;
};
#endif
#if !defined(IL2CPP_STRUCT_SearchResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_SearchResult__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Win32Native_WIN32_FIND_DATA.h>
#endif
#undef IL2CPP_STRUCT_SearchResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SearchResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SearchResult__Fields_FWDDECL)
#include <Modloader/app/structs/SearchResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SearchResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
