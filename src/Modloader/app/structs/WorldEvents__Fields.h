#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldEvents__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldEvents__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldEvents__Fields_DEFINED)
#include <Modloader/app/structs/GuidOwner__Fields.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED)
#define IL2CPP_STRUCT_WorldEvents__Fields_DEFINED
struct List_1_WorldEvents_Item_;
struct WorldEvents__Fields {
    struct GuidOwner__Fields _;
    int32_t DefaultValue;
    int32_t UniqueID;
    struct List_1_WorldEvents_Item_* Items;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldEvents__Fields_FWDDECL)
#define IL2CPP_STRUCT_WorldEvents__Fields_FWDDECL
#include <Modloader/app/structs/List_1_WorldEvents_Item_.h>
#endif
#undef IL2CPP_STRUCT_WorldEvents__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldEvents__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WorldEvents__Fields_FWDDECL)
#include <Modloader/app/structs/WorldEvents__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldEvents__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
