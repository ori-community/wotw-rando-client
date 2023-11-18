#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoListItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoListItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoListItem__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoListItem__Fields_DEFINED
struct MonoListItem;
struct Object;
struct __declspec(align(8)) MonoListItem__Fields {
    struct MonoListItem* next;
    struct Object* data;
};
#endif
#if !defined(IL2CPP_STRUCT_MonoListItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_MonoListItem__Fields_FWDDECL
#include <Modloader/app/structs/MonoListItem.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_MonoListItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoListItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MonoListItem__Fields_FWDDECL)
#include <Modloader/app/structs/MonoListItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoListItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
