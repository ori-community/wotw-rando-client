#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FireStickInteractor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FireStickInteractor_INITIALIZING
#if !defined(IL2CPP_STRUCT_FireStickInteractor_DEFINED)
#include <Modloader/app/structs/FireStickInteractor__Fields.h>
#if defined(IL2CPP_STRUCT_FireStickInteractor__Fields_DEFINED)
#define IL2CPP_STRUCT_FireStickInteractor_DEFINED
struct FireStickInteractor__Class;
struct FireStickInteractor {
    struct FireStickInteractor__Class* klass;
    MonitorData* monitor;
    struct FireStickInteractor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FireStickInteractor_FWDDECL)
#define IL2CPP_STRUCT_FireStickInteractor_FWDDECL
#include <Modloader/app/structs/FireStickInteractor__Class.h>
#endif
#undef IL2CPP_STRUCT_FireStickInteractor_INITIALIZING
#if !defined(IL2CPP_STRUCT_FireStickInteractor_DEFINED) && !defined(IL2CPP_STRUCT_FireStickInteractor_FWDDECL)
#include <Modloader/app/structs/FireStickInteractor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FireStickInteractor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
