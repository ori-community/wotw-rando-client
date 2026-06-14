#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChargeFlameBurst_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChargeFlameBurst_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChargeFlameBurst_DEFINED)
#include <Modloader/app/structs/ChargeFlameBurst__Fields.h>
#if defined(IL2CPP_STRUCT_ChargeFlameBurst__Fields_DEFINED)
#define IL2CPP_STRUCT_ChargeFlameBurst_DEFINED
struct ChargeFlameBurst__Class;
struct ChargeFlameBurst {
    struct ChargeFlameBurst__Class* klass;
    MonitorData* monitor;
    struct ChargeFlameBurst__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChargeFlameBurst_FWDDECL)
#define IL2CPP_STRUCT_ChargeFlameBurst_FWDDECL
#include <Modloader/app/structs/ChargeFlameBurst__Class.h>
#endif
#undef IL2CPP_STRUCT_ChargeFlameBurst_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChargeFlameBurst_DEFINED) && !defined(IL2CPP_STRUCT_ChargeFlameBurst_FWDDECL)
#include <Modloader/app/structs/ChargeFlameBurst.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChargeFlameBurst.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
