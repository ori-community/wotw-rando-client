#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JContainer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JContainer__Fields_DEFINED)
#include <Modloader/app/structs/JToken__Fields.h>
#if defined(IL2CPP_STRUCT_JToken__Fields_DEFINED)
#define IL2CPP_STRUCT_JContainer__Fields_DEFINED
struct ListChangedEventHandler;
struct AddingNewEventHandler;
struct NotifyCollectionChangedEventHandler;
struct Object;
struct JContainer__Fields {
    struct JToken__Fields _;
    struct ListChangedEventHandler* _listChanged;
    struct AddingNewEventHandler* _addingNew;
    struct NotifyCollectionChangedEventHandler* _collectionChanged;
    struct Object* _syncRoot;
    bool _busy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JContainer__Fields_FWDDECL)
#define IL2CPP_STRUCT_JContainer__Fields_FWDDECL
#include <Modloader/app/structs/AddingNewEventHandler.h>
#include <Modloader/app/structs/ListChangedEventHandler.h>
#include <Modloader/app/structs/NotifyCollectionChangedEventHandler.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_JContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JContainer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JContainer__Fields_FWDDECL)
#include <Modloader/app/structs/JContainer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JContainer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
