#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReadContentAsBinaryHelper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReadContentAsBinaryHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadContentAsBinaryHelper__Fields_DEFINED)
#include <Modloader/app/structs/ReadContentAsBinaryHelper_State__Enum.h>
#if defined(IL2CPP_STRUCT_ReadContentAsBinaryHelper_State__Enum_DEFINED)
#define IL2CPP_STRUCT_ReadContentAsBinaryHelper__Fields_DEFINED
struct XmlReader;
struct __declspec(align(8)) ReadContentAsBinaryHelper__Fields {
    struct XmlReader* reader;
    ReadContentAsBinaryHelper_State__Enum state;

    int32_t valueOffset;
    bool isEnd;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReadContentAsBinaryHelper__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReadContentAsBinaryHelper__Fields_FWDDECL
#include <Modloader/app/structs/XmlReader.h>
#endif
#undef IL2CPP_STRUCT_ReadContentAsBinaryHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadContentAsBinaryHelper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReadContentAsBinaryHelper__Fields_FWDDECL)
#include <Modloader/app/structs/ReadContentAsBinaryHelper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReadContentAsBinaryHelper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
