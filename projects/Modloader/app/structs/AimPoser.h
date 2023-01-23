#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AimPoser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AimPoser_INITIALIZING
#if !defined(IL2CPP_STRUCT_AimPoser_DEFINED)
#include <Modloader/app/structs/AimPoser__Fields.h>
#if defined(IL2CPP_STRUCT_AimPoser__Fields_DEFINED)
#define IL2CPP_STRUCT_AimPoser_DEFINED
struct AimPoser__Class;
struct AimPoser {
    struct AimPoser__Class* klass;
    MonitorData* monitor;
    struct AimPoser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AimPoser_FWDDECL)
#define IL2CPP_STRUCT_AimPoser_FWDDECL
#include <Modloader/app/structs/AimPoser__Class.h>
#endif
#undef IL2CPP_STRUCT_AimPoser_INITIALIZING
#if !defined(IL2CPP_STRUCT_AimPoser_DEFINED) && !defined(IL2CPP_STRUCT_AimPoser_FWDDECL)
#include <Modloader/app/structs/AimPoser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AimPoser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
