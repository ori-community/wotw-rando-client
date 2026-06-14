#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StickyMine_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StickyMine_INITIALIZING
#if !defined(IL2CPP_STRUCT_StickyMine_DEFINED)
#include <Modloader/app/structs/StickyMine__Fields.h>
#if defined(IL2CPP_STRUCT_StickyMine__Fields_DEFINED)
#define IL2CPP_STRUCT_StickyMine_DEFINED
struct StickyMine__Class;
struct StickyMine {
    struct StickyMine__Class* klass;
    MonitorData* monitor;
    struct StickyMine__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StickyMine_FWDDECL)
#define IL2CPP_STRUCT_StickyMine_FWDDECL
#include <Modloader/app/structs/StickyMine__Class.h>
#endif
#undef IL2CPP_STRUCT_StickyMine_INITIALIZING
#if !defined(IL2CPP_STRUCT_StickyMine_DEFINED) && !defined(IL2CPP_STRUCT_StickyMine_FWDDECL)
#include <Modloader/app/structs/StickyMine.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StickyMine.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
