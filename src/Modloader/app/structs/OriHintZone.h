#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriHintZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriHintZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriHintZone_DEFINED)
#include <Modloader/app/structs/OriHintZone__Fields.h>
#if defined(IL2CPP_STRUCT_OriHintZone__Fields_DEFINED)
#define IL2CPP_STRUCT_OriHintZone_DEFINED
struct OriHintZone__Class;
struct OriHintZone {
    struct OriHintZone__Class* klass;
    MonitorData* monitor;
    struct OriHintZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriHintZone_FWDDECL)
#define IL2CPP_STRUCT_OriHintZone_FWDDECL
#include <Modloader/app/structs/OriHintZone__Class.h>
#endif
#undef IL2CPP_STRUCT_OriHintZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriHintZone_DEFINED) && !defined(IL2CPP_STRUCT_OriHintZone_FWDDECL)
#include <Modloader/app/structs/OriHintZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriHintZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
