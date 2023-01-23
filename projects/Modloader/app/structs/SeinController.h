#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinController_DEFINED)
#include <Modloader/app/structs/SeinController__Fields.h>
#if defined(IL2CPP_STRUCT_SeinController__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinController_DEFINED
struct SeinController__Class;
struct SeinController {
    struct SeinController__Class* klass;
    MonitorData* monitor;
    struct SeinController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinController_FWDDECL)
#define IL2CPP_STRUCT_SeinController_FWDDECL
#include <Modloader/app/structs/SeinController__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinController_DEFINED) && !defined(IL2CPP_STRUCT_SeinController_FWDDECL)
#include <Modloader/app/structs/SeinController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
