#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonLoadSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonLoadSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonLoadSettings__Fields_DEFINED)
#include <Modloader/app/structs/CommentHandling__Enum.h>
#include <Modloader/app/structs/DuplicatePropertyNameHandling__Enum.h>
#include <Modloader/app/structs/LineInfoHandling__Enum.h>
#if defined(IL2CPP_STRUCT_CommentHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_LineInfoHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_DuplicatePropertyNameHandling__Enum_DEFINED)
#define IL2CPP_STRUCT_JsonLoadSettings__Fields_DEFINED
struct __declspec(align(8)) JsonLoadSettings__Fields {
    CommentHandling__Enum _commentHandling;

    LineInfoHandling__Enum _lineInfoHandling;

    DuplicatePropertyNameHandling__Enum _duplicatePropertyNameHandling;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonLoadSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonLoadSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_JsonLoadSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonLoadSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonLoadSettings__Fields_FWDDECL)
#include <Modloader/app/structs/JsonLoadSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonLoadSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
