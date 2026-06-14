#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollectionChangeEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollectionChangeEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectionChangeEventArgs__Fields_DEFINED)
#include <Modloader/app/structs/CollectionChangeAction__Enum.h>
#if defined(IL2CPP_STRUCT_CollectionChangeAction__Enum_DEFINED)
#define IL2CPP_STRUCT_CollectionChangeEventArgs__Fields_DEFINED
struct Object;
struct __declspec(align(8)) CollectionChangeEventArgs__Fields {
    CollectionChangeAction__Enum action;

    struct Object* element;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollectionChangeEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_CollectionChangeEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_CollectionChangeEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectionChangeEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CollectionChangeEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/CollectionChangeEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollectionChangeEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
