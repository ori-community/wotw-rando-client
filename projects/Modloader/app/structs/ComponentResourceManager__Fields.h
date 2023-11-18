#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComponentResourceManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComponentResourceManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComponentResourceManager__Fields_DEFINED)
#include <Modloader/app/structs/ResourceManager__Fields.h>
#if defined(IL2CPP_STRUCT_ResourceManager__Fields_DEFINED)
#define IL2CPP_STRUCT_ComponentResourceManager__Fields_DEFINED
struct Hashtable;
struct CultureInfo;
struct ComponentResourceManager__Fields {
    struct ResourceManager__Fields _;
    struct Hashtable* _resourceSets;
    struct CultureInfo* _neutralResourcesCulture;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComponentResourceManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_ComponentResourceManager__Fields_FWDDECL
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Hashtable.h>
#endif
#undef IL2CPP_STRUCT_ComponentResourceManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComponentResourceManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ComponentResourceManager__Fields_FWDDECL)
#include <Modloader/app/structs/ComponentResourceManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComponentResourceManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
