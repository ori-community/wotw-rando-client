#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberGCLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberGCLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGCLogic_DEFINED)
#define IL2CPP_STRUCT_UberGCLogic_DEFINED
struct UberGCLogic__Class;
struct UberGCLogic {
    struct UberGCLogic__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UberGCLogic_FWDDECL)
#define IL2CPP_STRUCT_UberGCLogic_FWDDECL
#include <Modloader/app/structs/UberGCLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_UberGCLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGCLogic_DEFINED) && !defined(IL2CPP_STRUCT_UberGCLogic_FWDDECL)
#include <Modloader/app/structs/UberGCLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberGCLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
