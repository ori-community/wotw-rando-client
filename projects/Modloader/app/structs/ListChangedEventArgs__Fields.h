#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListChangedEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListChangedEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListChangedEventArgs__Fields_DEFINED)
#include <Modloader/app/structs/ListChangedType__Enum.h>
#if defined(IL2CPP_STRUCT_ListChangedType__Enum_DEFINED)
#define IL2CPP_STRUCT_ListChangedEventArgs__Fields_DEFINED
struct PropertyDescriptor;
struct __declspec(align(8)) ListChangedEventArgs__Fields {
    ListChangedType__Enum listChangedType;

    int32_t newIndex;
    int32_t oldIndex;
    struct PropertyDescriptor* propDesc;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListChangedEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_ListChangedEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/PropertyDescriptor.h>
#endif
#undef IL2CPP_STRUCT_ListChangedEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListChangedEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ListChangedEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/ListChangedEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListChangedEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
