#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArrayList_IListWrapper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArrayList_IListWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayList_IListWrapper__Fields_DEFINED)
#include <Modloader/app/structs/ArrayList__Fields.h>
#if defined(IL2CPP_STRUCT_ArrayList__Fields_DEFINED)
#define IL2CPP_STRUCT_ArrayList_IListWrapper__Fields_DEFINED
struct IList;
struct ArrayList_IListWrapper__Fields {
    struct ArrayList__Fields _;
    struct IList* _list;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArrayList_IListWrapper__Fields_FWDDECL)
#define IL2CPP_STRUCT_ArrayList_IListWrapper__Fields_FWDDECL
#include <Modloader/app/structs/IList.h>
#endif
#undef IL2CPP_STRUCT_ArrayList_IListWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayList_IListWrapper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ArrayList_IListWrapper__Fields_FWDDECL)
#include <Modloader/app/structs/ArrayList_IListWrapper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArrayList_IListWrapper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
