#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TargetException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TargetException_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetException_DEFINED)
#include <Modloader/app/structs/TargetException__Fields.h>
#if defined(IL2CPP_STRUCT_TargetException__Fields_DEFINED)
#define IL2CPP_STRUCT_TargetException_DEFINED
struct TargetException__Class;
struct TargetException {
    struct TargetException__Class* klass;
    MonitorData* monitor;
    struct TargetException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TargetException_FWDDECL)
#define IL2CPP_STRUCT_TargetException_FWDDECL
#include <Modloader/app/structs/TargetException__Class.h>
#endif
#undef IL2CPP_STRUCT_TargetException_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetException_DEFINED) && !defined(IL2CPP_STRUCT_TargetException_FWDDECL)
#include <Modloader/app/structs/TargetException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TargetException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
