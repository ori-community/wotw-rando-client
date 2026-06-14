#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BindingList_1_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BindingList_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindingList_1_System_Object___Fields_DEFINED)
#include <Modloader/app/structs/Collection_1_System_Object___Fields.h>
#if defined(IL2CPP_STRUCT_Collection_1_System_Object___Fields_DEFINED)
#define IL2CPP_STRUCT_BindingList_1_System_Object___Fields_DEFINED
struct PropertyDescriptorCollection;
struct PropertyChangedEventHandler;
struct AddingNewEventHandler;
struct ListChangedEventHandler;
struct BindingList_1_System_Object___Fields {
    struct Collection_1_System_Object___Fields _;
    int32_t addNewPos;
    bool raiseListChangedEvents;
    bool raiseItemChangedEvents;
    struct PropertyDescriptorCollection* itemTypeProperties;
    struct PropertyChangedEventHandler* propertyChangedEventHandler;
    struct AddingNewEventHandler* onAddingNew;
    struct ListChangedEventHandler* onListChanged;
    int32_t lastChangeIndex;
    bool allowNew;
    bool allowEdit;
    bool allowRemove;
    bool userSetAllowNew;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BindingList_1_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_BindingList_1_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/AddingNewEventHandler.h>
#include <Modloader/app/structs/ListChangedEventHandler.h>
#include <Modloader/app/structs/PropertyChangedEventHandler.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#endif
#undef IL2CPP_STRUCT_BindingList_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindingList_1_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_BindingList_1_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/BindingList_1_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BindingList_1_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
