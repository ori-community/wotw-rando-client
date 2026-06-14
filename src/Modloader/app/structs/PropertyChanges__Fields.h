#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyChanges__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyChanges__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyChanges__Fields_DEFINED)
#define IL2CPP_STRUCT_PropertyChanges__Fields_DEFINED
struct String;
struct __declspec(align(8)) PropertyChanges__Fields {
    struct String* Path;
    struct String* Name;
    struct String* OldValue;
    struct String* NewValue;
};
#endif
#if !defined(IL2CPP_STRUCT_PropertyChanges__Fields_FWDDECL)
#define IL2CPP_STRUCT_PropertyChanges__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PropertyChanges__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyChanges__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PropertyChanges__Fields_FWDDECL)
#include <Modloader/app/structs/PropertyChanges__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyChanges__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
