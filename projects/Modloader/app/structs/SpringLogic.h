#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpringLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpringLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringLogic_DEFINED)
#include <Modloader/app/structs/SpringLogic__Fields.h>
#if defined(IL2CPP_STRUCT_SpringLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_SpringLogic_DEFINED
struct SpringLogic__Class;
struct SpringLogic {
    struct SpringLogic__Class* klass;
    MonitorData* monitor;
    struct SpringLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpringLogic_FWDDECL)
#define IL2CPP_STRUCT_SpringLogic_FWDDECL
#include <Modloader/app/structs/SpringLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_SpringLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringLogic_DEFINED) && !defined(IL2CPP_STRUCT_SpringLogic_FWDDECL)
#include <Modloader/app/structs/SpringLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpringLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
