#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardsScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardsScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardsScreen_DEFINED)
#include <Modloader/app/structs/SpiritShardsScreen__Fields.h>
#if defined(IL2CPP_STRUCT_SpiritShardsScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritShardsScreen_DEFINED
struct SpiritShardsScreen__Class;
struct SpiritShardsScreen {
    struct SpiritShardsScreen__Class* klass;
    MonitorData* monitor;
    struct SpiritShardsScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardsScreen_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardsScreen_FWDDECL
#include <Modloader/app/structs/SpiritShardsScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardsScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardsScreen_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardsScreen_FWDDECL)
#include <Modloader/app/structs/SpiritShardsScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardsScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
