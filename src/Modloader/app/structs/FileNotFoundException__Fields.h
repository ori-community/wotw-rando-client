#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileNotFoundException__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileNotFoundException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileNotFoundException__Fields_DEFINED)
#include <Modloader/app/structs/IOException__Fields.h>
#if defined(IL2CPP_STRUCT_IOException__Fields_DEFINED)
#define IL2CPP_STRUCT_FileNotFoundException__Fields_DEFINED
struct String;
struct FileNotFoundException__Fields {
    struct IOException__Fields _;
    struct String* _fileName;
    struct String* _fusionLog;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileNotFoundException__Fields_FWDDECL)
#define IL2CPP_STRUCT_FileNotFoundException__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_FileNotFoundException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileNotFoundException__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FileNotFoundException__Fields_FWDDECL)
#include <Modloader/app/structs/FileNotFoundException__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileNotFoundException__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
