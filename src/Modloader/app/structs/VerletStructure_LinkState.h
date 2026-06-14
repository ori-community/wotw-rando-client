#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletStructure_LinkState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletStructure_LinkState_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_LinkState_DEFINED)
#include <Modloader/app/structs/VerletStructure_LinkState__Fields.h>
#if defined(IL2CPP_STRUCT_VerletStructure_LinkState__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletStructure_LinkState_DEFINED
struct VerletStructure_LinkState__Class;
struct VerletStructure_LinkState {
    struct VerletStructure_LinkState__Class* klass;
    MonitorData* monitor;
    struct VerletStructure_LinkState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletStructure_LinkState_FWDDECL)
#define IL2CPP_STRUCT_VerletStructure_LinkState_FWDDECL
#include <Modloader/app/structs/VerletStructure_LinkState__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletStructure_LinkState_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_LinkState_DEFINED) && !defined(IL2CPP_STRUCT_VerletStructure_LinkState_FWDDECL)
#include <Modloader/app/structs/VerletStructure_LinkState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletStructure_LinkState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
