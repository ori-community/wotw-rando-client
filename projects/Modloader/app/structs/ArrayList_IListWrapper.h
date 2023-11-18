#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArrayList_IListWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArrayList_IListWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayList_IListWrapper_DEFINED)
#include <Modloader/app/structs/ArrayList_IListWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_ArrayList_IListWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_ArrayList_IListWrapper_DEFINED
struct ArrayList_IListWrapper__Class;
struct ArrayList_IListWrapper {
    struct ArrayList_IListWrapper__Class* klass;
    MonitorData* monitor;
    struct ArrayList_IListWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArrayList_IListWrapper_FWDDECL)
#define IL2CPP_STRUCT_ArrayList_IListWrapper_FWDDECL
#include <Modloader/app/structs/ArrayList_IListWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_ArrayList_IListWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayList_IListWrapper_DEFINED) && !defined(IL2CPP_STRUCT_ArrayList_IListWrapper_FWDDECL)
#include <Modloader/app/structs/ArrayList_IListWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArrayList_IListWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
