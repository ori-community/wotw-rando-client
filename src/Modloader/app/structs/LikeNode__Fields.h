#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LikeNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LikeNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LikeNode__Fields_DEFINED)
#include <Modloader/app/structs/BinaryNode__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryNode__Fields_DEFINED)
#define IL2CPP_STRUCT_LikeNode__Fields_DEFINED
struct String;
struct LikeNode__Fields {
    struct BinaryNode__Fields _;
    int32_t _kind;
    struct String* _pattern;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LikeNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_LikeNode__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LikeNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LikeNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LikeNode__Fields_FWDDECL)
#include <Modloader/app/structs/LikeNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LikeNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
