#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NotifyCollectionChangedEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NotifyCollectionChangedEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotifyCollectionChangedEventArgs__Fields_DEFINED)
#include <Modloader/app/structs/NotifyCollectionChangedAction__Enum.h>
#if defined(IL2CPP_STRUCT_NotifyCollectionChangedAction__Enum_DEFINED)
#define IL2CPP_STRUCT_NotifyCollectionChangedEventArgs__Fields_DEFINED
struct IList;
struct __declspec(align(8)) NotifyCollectionChangedEventArgs__Fields {
    NotifyCollectionChangedAction__Enum _action;

    struct IList* _newItems;
    struct IList* _oldItems;
    int32_t _newStartingIndex;
    int32_t _oldStartingIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NotifyCollectionChangedEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_NotifyCollectionChangedEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/IList.h>
#endif
#undef IL2CPP_STRUCT_NotifyCollectionChangedEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotifyCollectionChangedEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NotifyCollectionChangedEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/NotifyCollectionChangedEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NotifyCollectionChangedEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
