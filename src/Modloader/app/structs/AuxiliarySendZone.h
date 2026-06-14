#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuxiliarySendZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuxiliarySendZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuxiliarySendZone_DEFINED)
#include <Modloader/app/structs/AuxiliarySendZone__Fields.h>
#if defined(IL2CPP_STRUCT_AuxiliarySendZone__Fields_DEFINED)
#define IL2CPP_STRUCT_AuxiliarySendZone_DEFINED
struct AuxiliarySendZone__Class;
struct AuxiliarySendZone {
    struct AuxiliarySendZone__Class* klass;
    MonitorData* monitor;
    struct AuxiliarySendZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AuxiliarySendZone_FWDDECL)
#define IL2CPP_STRUCT_AuxiliarySendZone_FWDDECL
#include <Modloader/app/structs/AuxiliarySendZone__Class.h>
#endif
#undef IL2CPP_STRUCT_AuxiliarySendZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuxiliarySendZone_DEFINED) && !defined(IL2CPP_STRUCT_AuxiliarySendZone_FWDDECL)
#include <Modloader/app/structs/AuxiliarySendZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuxiliarySendZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
