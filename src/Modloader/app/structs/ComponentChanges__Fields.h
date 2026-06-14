#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComponentChanges__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComponentChanges__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComponentChanges__Fields_DEFINED)
#include <Modloader/app/structs/ChangesStatus__Enum.h>
#if defined(IL2CPP_STRUCT_ChangesStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_ComponentChanges__Fields_DEFINED
struct String;
struct List_1_Moon_ReviewFramework_PropertyChanges_;
struct __declspec(align(8)) ComponentChanges__Fields {
    struct String* Type;
    ChangesStatus__Enum Status;

    struct List_1_Moon_ReviewFramework_PropertyChanges_* Properties;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComponentChanges__Fields_FWDDECL)
#define IL2CPP_STRUCT_ComponentChanges__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_ReviewFramework_PropertyChanges_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ComponentChanges__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComponentChanges__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ComponentChanges__Fields_FWDDECL)
#include <Modloader/app/structs/ComponentChanges__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComponentChanges__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
