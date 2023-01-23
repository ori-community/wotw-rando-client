#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PearsonHash_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PearsonHash_INITIALIZING
#if !defined(IL2CPP_STRUCT_PearsonHash_DEFINED)
#define IL2CPP_STRUCT_PearsonHash_DEFINED
struct PearsonHash__Class;
struct PearsonHash {
    struct PearsonHash__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PearsonHash_FWDDECL)
#define IL2CPP_STRUCT_PearsonHash_FWDDECL
#include <Modloader/app/structs/PearsonHash__Class.h>
#endif
#undef IL2CPP_STRUCT_PearsonHash_INITIALIZING
#if !defined(IL2CPP_STRUCT_PearsonHash_DEFINED) && !defined(IL2CPP_STRUCT_PearsonHash_FWDDECL)
#include <Modloader/app/structs/PearsonHash.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PearsonHash.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
