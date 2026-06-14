#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoremasterUISlot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoremasterUISlot_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoremasterUISlot_DEFINED)
#include <Modloader/app/structs/LoremasterUISlot__Fields.h>
#if defined(IL2CPP_STRUCT_LoremasterUISlot__Fields_DEFINED)
#define IL2CPP_STRUCT_LoremasterUISlot_DEFINED
struct LoremasterUISlot__Class;
struct LoremasterUISlot {
    struct LoremasterUISlot__Class* klass;
    MonitorData* monitor;
    struct LoremasterUISlot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoremasterUISlot_FWDDECL)
#define IL2CPP_STRUCT_LoremasterUISlot_FWDDECL
#include <Modloader/app/structs/LoremasterUISlot__Class.h>
#endif
#undef IL2CPP_STRUCT_LoremasterUISlot_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoremasterUISlot_DEFINED) && !defined(IL2CPP_STRUCT_LoremasterUISlot_FWDDECL)
#include <Modloader/app/structs/LoremasterUISlot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoremasterUISlot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
