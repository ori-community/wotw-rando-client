#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShardLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShardLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShardLogic_DEFINED)
#define IL2CPP_STRUCT_ShardLogic_DEFINED
struct ShardLogic__Class;
struct ShardLogic {
    struct ShardLogic__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ShardLogic_FWDDECL)
#define IL2CPP_STRUCT_ShardLogic_FWDDECL
#include <Modloader/app/structs/ShardLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_ShardLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShardLogic_DEFINED) && !defined(IL2CPP_STRUCT_ShardLogic_FWDDECL)
#include <Modloader/app/structs/ShardLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShardLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
