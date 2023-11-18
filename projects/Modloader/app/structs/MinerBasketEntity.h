#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerBasketEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerBasketEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerBasketEntity_DEFINED)
#include <Modloader/app/structs/MinerBasketEntity__Fields.h>
#if defined(IL2CPP_STRUCT_MinerBasketEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerBasketEntity_DEFINED
struct MinerBasketEntity__Class;
struct MinerBasketEntity {
    struct MinerBasketEntity__Class* klass;
    MonitorData* monitor;
    struct MinerBasketEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerBasketEntity_FWDDECL)
#define IL2CPP_STRUCT_MinerBasketEntity_FWDDECL
#include <Modloader/app/structs/MinerBasketEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_MinerBasketEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerBasketEntity_DEFINED) && !defined(IL2CPP_STRUCT_MinerBasketEntity_FWDDECL)
#include <Modloader/app/structs/MinerBasketEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerBasketEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
