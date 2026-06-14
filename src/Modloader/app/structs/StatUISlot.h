#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatUISlot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatUISlot_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatUISlot_DEFINED)
#include <Modloader/app/structs/StatUISlot__Fields.h>
#if defined(IL2CPP_STRUCT_StatUISlot__Fields_DEFINED)
#define IL2CPP_STRUCT_StatUISlot_DEFINED
struct StatUISlot__Class;
struct StatUISlot {
    struct StatUISlot__Class* klass;
    MonitorData* monitor;
    struct StatUISlot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatUISlot_FWDDECL)
#define IL2CPP_STRUCT_StatUISlot_FWDDECL
#include <Modloader/app/structs/StatUISlot__Class.h>
#endif
#undef IL2CPP_STRUCT_StatUISlot_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatUISlot_DEFINED) && !defined(IL2CPP_STRUCT_StatUISlot_FWDDECL)
#include <Modloader/app/structs/StatUISlot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatUISlot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
