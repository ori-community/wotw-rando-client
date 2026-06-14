#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Container__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Container__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Container__Fields_DEFINED)
#define IL2CPP_STRUCT_Container__Fields_DEFINED
struct ISite__Array;
struct ComponentCollection;
struct ContainerFilterService;
struct Object;
struct __declspec(align(8)) Container__Fields {
    struct ISite__Array* sites;
    int32_t siteCount;
    struct ComponentCollection* components;
    struct ContainerFilterService* filter;
    bool checkedFilter;
    struct Object* syncObj;
};
#endif
#if !defined(IL2CPP_STRUCT_Container__Fields_FWDDECL)
#define IL2CPP_STRUCT_Container__Fields_FWDDECL
#include <Modloader/app/structs/ComponentCollection.h>
#include <Modloader/app/structs/ContainerFilterService.h>
#include <Modloader/app/structs/ISite__Array.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Container__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Container__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Container__Fields_FWDDECL)
#include <Modloader/app/structs/Container__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Container__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
