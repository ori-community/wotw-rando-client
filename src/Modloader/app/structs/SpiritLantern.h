#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritLantern_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritLantern_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLantern_DEFINED)
#include <Modloader/app/structs/SpiritLantern__Fields.h>
#if defined(IL2CPP_STRUCT_SpiritLantern__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritLantern_DEFINED
struct SpiritLantern__Class;
struct SpiritLantern {
    struct SpiritLantern__Class* klass;
    MonitorData* monitor;
    struct SpiritLantern__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritLantern_FWDDECL)
#define IL2CPP_STRUCT_SpiritLantern_FWDDECL
#include <Modloader/app/structs/SpiritLantern__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiritLantern_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLantern_DEFINED) && !defined(IL2CPP_STRUCT_SpiritLantern_FWDDECL)
#include <Modloader/app/structs/SpiritLantern.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritLantern.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
