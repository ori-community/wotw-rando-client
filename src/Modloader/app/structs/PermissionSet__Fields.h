#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PermissionSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PermissionSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PermissionSet__Fields_DEFINED)
#include <Modloader/app/structs/PermissionState__Enum.h>
#if defined(IL2CPP_STRUCT_PermissionState__Enum_DEFINED)
#define IL2CPP_STRUCT_PermissionSet__Fields_DEFINED
struct ArrayList;
struct Boolean__Array;
struct __declspec(align(8)) PermissionSet__Fields {
    PermissionState__Enum state;

    struct ArrayList* list;
    bool _declsec;
    struct Boolean__Array* _ignored;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PermissionSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_PermissionSet__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Boolean__Array.h>
#endif
#undef IL2CPP_STRUCT_PermissionSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PermissionSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PermissionSet__Fields_FWDDECL)
#include <Modloader/app/structs/PermissionSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PermissionSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
