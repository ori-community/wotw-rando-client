#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IdRefNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IdRefNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IdRefNode__Fields_DEFINED)
#define IL2CPP_STRUCT_IdRefNode__Fields_DEFINED
struct String;
struct IdRefNode;
struct __declspec(align(8)) IdRefNode__Fields {
    struct String* Id;
    int32_t LineNo;
    int32_t LinePos;
    struct IdRefNode* Next;
};
#endif
#if !defined(IL2CPP_STRUCT_IdRefNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_IdRefNode__Fields_FWDDECL
#include <Modloader/app/structs/IdRefNode.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_IdRefNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IdRefNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IdRefNode__Fields_FWDDECL)
#include <Modloader/app/structs/IdRefNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IdRefNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
