#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SelectorActiveAxis_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SelectorActiveAxis_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelectorActiveAxis_DEFINED)
#include <Modloader/app/structs/SelectorActiveAxis__Fields.h>
#if defined(IL2CPP_STRUCT_SelectorActiveAxis__Fields_DEFINED)
#define IL2CPP_STRUCT_SelectorActiveAxis_DEFINED
struct SelectorActiveAxis__Class;
struct SelectorActiveAxis {
    struct SelectorActiveAxis__Class* klass;
    MonitorData* monitor;
    struct SelectorActiveAxis__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SelectorActiveAxis_FWDDECL)
#define IL2CPP_STRUCT_SelectorActiveAxis_FWDDECL
#include <Modloader/app/structs/SelectorActiveAxis__Class.h>
#endif
#undef IL2CPP_STRUCT_SelectorActiveAxis_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelectorActiveAxis_DEFINED) && !defined(IL2CPP_STRUCT_SelectorActiveAxis_FWDDECL)
#include <Modloader/app/structs/SelectorActiveAxis.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SelectorActiveAxis.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
