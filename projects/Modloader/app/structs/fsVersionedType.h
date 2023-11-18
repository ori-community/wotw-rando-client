#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsVersionedType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsVersionedType_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsVersionedType_DEFINED)
#define IL2CPP_STRUCT_fsVersionedType_DEFINED
struct fsVersionedType__Array;
struct String;
struct Type;
struct fsVersionedType {
    struct fsVersionedType__Array* Ancestors;
    struct String* VersionString;
    struct Type* ModelType;
};
#endif
#if !defined(IL2CPP_STRUCT_fsVersionedType_FWDDECL)
#define IL2CPP_STRUCT_fsVersionedType_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/fsVersionedType__Array.h>
#endif
#undef IL2CPP_STRUCT_fsVersionedType_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsVersionedType_DEFINED) && !defined(IL2CPP_STRUCT_fsVersionedType_FWDDECL)
#include <Modloader/app/structs/fsVersionedType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsVersionedType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
