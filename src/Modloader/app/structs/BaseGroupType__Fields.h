#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseGroupType__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseGroupType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseGroupType__Fields_DEFINED)
#include <Modloader/app/structs/BaseType__Fields.h>
#if defined(IL2CPP_STRUCT_BaseType__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseGroupType__Fields_DEFINED
struct Byte__Array;
struct BaseGroupType__Fields {
    struct BaseType__Fields _;
    struct Byte__Array* groupGuid;
    bool hashed2;
    uint32_t hash2;
    bool forceId2;
    uint32_t forcedId2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseGroupType__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaseGroupType__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_BaseGroupType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseGroupType__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaseGroupType__Fields_FWDDECL)
#include <Modloader/app/structs/BaseGroupType__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseGroupType__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
