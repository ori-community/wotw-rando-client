#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinWarpSpell_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinWarpSpell_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWarpSpell_DEFINED)
#include <Modloader/app/structs/SeinWarpSpell__Fields.h>
#if defined(IL2CPP_STRUCT_SeinWarpSpell__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinWarpSpell_DEFINED
struct SeinWarpSpell__Class;
struct SeinWarpSpell {
    struct SeinWarpSpell__Class* klass;
    MonitorData* monitor;
    struct SeinWarpSpell__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinWarpSpell_FWDDECL)
#define IL2CPP_STRUCT_SeinWarpSpell_FWDDECL
#include <Modloader/app/structs/SeinWarpSpell__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinWarpSpell_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWarpSpell_DEFINED) && !defined(IL2CPP_STRUCT_SeinWarpSpell_FWDDECL)
#include <Modloader/app/structs/SeinWarpSpell.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinWarpSpell.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
