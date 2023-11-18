#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoFiPalette_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoFiPalette_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoFiPalette_DEFINED)
#include <Modloader/app/structs/LoFiPalette__Fields.h>
#if defined(IL2CPP_STRUCT_LoFiPalette__Fields_DEFINED)
#define IL2CPP_STRUCT_LoFiPalette_DEFINED
struct LoFiPalette__Class;
struct LoFiPalette {
    struct LoFiPalette__Class* klass;
    MonitorData* monitor;
    struct LoFiPalette__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoFiPalette_FWDDECL)
#define IL2CPP_STRUCT_LoFiPalette_FWDDECL
#include <Modloader/app/structs/LoFiPalette__Class.h>
#endif
#undef IL2CPP_STRUCT_LoFiPalette_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoFiPalette_DEFINED) && !defined(IL2CPP_STRUCT_LoFiPalette_FWDDECL)
#include <Modloader/app/structs/LoFiPalette.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoFiPalette.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
