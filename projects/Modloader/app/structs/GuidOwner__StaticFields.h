#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuidOwner__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuidOwner__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuidOwner__StaticFields_DEFINED)
#define IL2CPP_STRUCT_GuidOwner__StaticFields_DEFINED
struct MoonGuid;
struct GuidOwner__StaticFields {
    struct MoonGuid* UNINITIALIZED_GUID;
};
#endif
#if !defined(IL2CPP_STRUCT_GuidOwner__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GuidOwner__StaticFields_FWDDECL
#include <Modloader/app/structs/MoonGuid.h>
#endif
#undef IL2CPP_STRUCT_GuidOwner__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuidOwner__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GuidOwner__StaticFields_FWDDECL)
#include <Modloader/app/structs/GuidOwner__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuidOwner__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
