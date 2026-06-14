#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WandererStateSelector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WandererStateSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererStateSelector_DEFINED)
#include <Modloader/app/structs/WandererStateSelector__Fields.h>
#if defined(IL2CPP_STRUCT_WandererStateSelector__Fields_DEFINED)
#define IL2CPP_STRUCT_WandererStateSelector_DEFINED
struct WandererStateSelector__Class;
struct WandererStateSelector {
    struct WandererStateSelector__Class* klass;
    MonitorData* monitor;
    struct WandererStateSelector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WandererStateSelector_FWDDECL)
#define IL2CPP_STRUCT_WandererStateSelector_FWDDECL
#include <Modloader/app/structs/WandererStateSelector__Class.h>
#endif
#undef IL2CPP_STRUCT_WandererStateSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererStateSelector_DEFINED) && !defined(IL2CPP_STRUCT_WandererStateSelector_FWDDECL)
#include <Modloader/app/structs/WandererStateSelector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WandererStateSelector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
