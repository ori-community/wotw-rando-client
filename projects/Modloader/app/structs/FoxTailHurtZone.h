#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FoxTailHurtZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FoxTailHurtZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxTailHurtZone_DEFINED)
#include <Modloader/app/structs/FoxTailHurtZone__Fields.h>
#if defined(IL2CPP_STRUCT_FoxTailHurtZone__Fields_DEFINED)
#define IL2CPP_STRUCT_FoxTailHurtZone_DEFINED
struct FoxTailHurtZone__Class;
struct FoxTailHurtZone {
    struct FoxTailHurtZone__Class* klass;
    MonitorData* monitor;
    struct FoxTailHurtZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FoxTailHurtZone_FWDDECL)
#define IL2CPP_STRUCT_FoxTailHurtZone_FWDDECL
#include <Modloader/app/structs/FoxTailHurtZone__Class.h>
#endif
#undef IL2CPP_STRUCT_FoxTailHurtZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxTailHurtZone_DEFINED) && !defined(IL2CPP_STRUCT_FoxTailHurtZone_FWDDECL)
#include <Modloader/app/structs/FoxTailHurtZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FoxTailHurtZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
