#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IBindingList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IBindingList_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBindingList_DEFINED)
#define IL2CPP_STRUCT_IBindingList_DEFINED
struct IBindingList__Class;
struct IBindingList {
    struct IBindingList__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IBindingList_FWDDECL)
#define IL2CPP_STRUCT_IBindingList_FWDDECL
#include <Modloader/app/structs/IBindingList__Class.h>
#endif
#undef IL2CPP_STRUCT_IBindingList_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBindingList_DEFINED) && !defined(IL2CPP_STRUCT_IBindingList_FWDDECL)
#include <Modloader/app/structs/IBindingList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IBindingList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
