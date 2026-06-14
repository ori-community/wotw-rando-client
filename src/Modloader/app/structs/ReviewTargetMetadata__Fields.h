#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReviewTargetMetadata__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReviewTargetMetadata__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReviewTargetMetadata__Fields_DEFINED)
#include <Modloader/app/structs/ReviewStatus__Enum.h>
#if defined(IL2CPP_STRUCT_ReviewStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_ReviewTargetMetadata__Fields_DEFINED
struct String;
struct ReviewTargetChangesSerialization;
struct __declspec(align(8)) ReviewTargetMetadata__Fields {
    struct String* Guid;
    struct String* ObjectName;
    ReviewStatus__Enum Status;

    struct ReviewTargetChangesSerialization* Changes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReviewTargetMetadata__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReviewTargetMetadata__Fields_FWDDECL
#include <Modloader/app/structs/ReviewTargetChangesSerialization.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ReviewTargetMetadata__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReviewTargetMetadata__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReviewTargetMetadata__Fields_FWDDECL)
#include <Modloader/app/structs/ReviewTargetMetadata__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReviewTargetMetadata__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
