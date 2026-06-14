#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstructionCall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstructionCall_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstructionCall_DEFINED)
#include <Modloader/app/structs/ConstructionCall__Fields.h>
#if defined(IL2CPP_STRUCT_ConstructionCall__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstructionCall_DEFINED
struct ConstructionCall__Class;
struct ConstructionCall {
    struct ConstructionCall__Class* klass;
    MonitorData* monitor;
    struct ConstructionCall__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstructionCall_FWDDECL)
#define IL2CPP_STRUCT_ConstructionCall_FWDDECL
#include <Modloader/app/structs/ConstructionCall__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstructionCall_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstructionCall_DEFINED) && !defined(IL2CPP_STRUCT_ConstructionCall_FWDDECL)
#include <Modloader/app/structs/ConstructionCall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstructionCall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
