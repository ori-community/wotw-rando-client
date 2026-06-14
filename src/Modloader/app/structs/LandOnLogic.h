#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LandOnLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LandOnLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_LandOnLogic_DEFINED)
#include <Modloader/app/structs/LandOnLogic__Fields.h>
#if defined(IL2CPP_STRUCT_LandOnLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_LandOnLogic_DEFINED
struct LandOnLogic__Class;
struct LandOnLogic {
    struct LandOnLogic__Class* klass;
    MonitorData* monitor;
    struct LandOnLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LandOnLogic_FWDDECL)
#define IL2CPP_STRUCT_LandOnLogic_FWDDECL
#include <Modloader/app/structs/LandOnLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_LandOnLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_LandOnLogic_DEFINED) && !defined(IL2CPP_STRUCT_LandOnLogic_FWDDECL)
#include <Modloader/app/structs/LandOnLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LandOnLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
