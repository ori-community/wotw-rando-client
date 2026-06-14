#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Recoil_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Recoil_INITIALIZING
#if !defined(IL2CPP_STRUCT_Recoil_DEFINED)
#include <Modloader/app/structs/Recoil__Fields.h>
#if defined(IL2CPP_STRUCT_Recoil__Fields_DEFINED)
#define IL2CPP_STRUCT_Recoil_DEFINED
struct Recoil__Class;
struct Recoil {
    struct Recoil__Class* klass;
    MonitorData* monitor;
    struct Recoil__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Recoil_FWDDECL)
#define IL2CPP_STRUCT_Recoil_FWDDECL
#include <Modloader/app/structs/Recoil__Class.h>
#endif
#undef IL2CPP_STRUCT_Recoil_INITIALIZING
#if !defined(IL2CPP_STRUCT_Recoil_DEFINED) && !defined(IL2CPP_STRUCT_Recoil_FWDDECL)
#include <Modloader/app/structs/Recoil.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Recoil.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
