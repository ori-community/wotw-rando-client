#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartographerEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartographerEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerEntity_DEFINED)
#include <Modloader/app/structs/CartographerEntity__Fields.h>
#if defined(IL2CPP_STRUCT_CartographerEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_CartographerEntity_DEFINED
struct CartographerEntity__Class;
struct CartographerEntity {
    struct CartographerEntity__Class* klass;
    MonitorData* monitor;
    struct CartographerEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartographerEntity_FWDDECL)
#define IL2CPP_STRUCT_CartographerEntity_FWDDECL
#include <Modloader/app/structs/CartographerEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_CartographerEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerEntity_DEFINED) && !defined(IL2CPP_STRUCT_CartographerEntity_FWDDECL)
#include <Modloader/app/structs/CartographerEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartographerEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
