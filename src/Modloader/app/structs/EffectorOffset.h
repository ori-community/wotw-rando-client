#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EffectorOffset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EffectorOffset_INITIALIZING
#if !defined(IL2CPP_STRUCT_EffectorOffset_DEFINED)
#include <Modloader/app/structs/EffectorOffset__Fields.h>
#if defined(IL2CPP_STRUCT_EffectorOffset__Fields_DEFINED)
#define IL2CPP_STRUCT_EffectorOffset_DEFINED
struct EffectorOffset__Class;
struct EffectorOffset {
    struct EffectorOffset__Class* klass;
    MonitorData* monitor;
    struct EffectorOffset__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EffectorOffset_FWDDECL)
#define IL2CPP_STRUCT_EffectorOffset_FWDDECL
#include <Modloader/app/structs/EffectorOffset__Class.h>
#endif
#undef IL2CPP_STRUCT_EffectorOffset_INITIALIZING
#if !defined(IL2CPP_STRUCT_EffectorOffset_DEFINED) && !defined(IL2CPP_STRUCT_EffectorOffset_FWDDECL)
#include <Modloader/app/structs/EffectorOffset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EffectorOffset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
