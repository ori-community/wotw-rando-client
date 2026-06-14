#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateCollection__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateCollection__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateCollection__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UberStateCollection__StaticFields_DEFINED
struct String;
struct UberStateCollection;
struct UberStateCollection__StaticFields {
    struct String* UBER_STATE_COLLECTION_ASSET_PATH;
    bool IsDescriptorListDirty;
    struct UberStateCollection* m_instance;
};
#endif
#if !defined(IL2CPP_STRUCT_UberStateCollection__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberStateCollection__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberStateCollection.h>
#endif
#undef IL2CPP_STRUCT_UberStateCollection__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateCollection__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberStateCollection__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberStateCollection__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateCollection__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
