#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HueFocus_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HueFocus_INITIALIZING
#if !defined(IL2CPP_STRUCT_HueFocus_DEFINED)
#include <Modloader/app/structs/HueFocus__Fields.h>
#if defined(IL2CPP_STRUCT_HueFocus__Fields_DEFINED)
#define IL2CPP_STRUCT_HueFocus_DEFINED
struct HueFocus__Class;
struct HueFocus {
    struct HueFocus__Class* klass;
    MonitorData* monitor;
    struct HueFocus__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HueFocus_FWDDECL)
#define IL2CPP_STRUCT_HueFocus_FWDDECL
#include <Modloader/app/structs/HueFocus__Class.h>
#endif
#undef IL2CPP_STRUCT_HueFocus_INITIALIZING
#if !defined(IL2CPP_STRUCT_HueFocus_DEFINED) && !defined(IL2CPP_STRUCT_HueFocus_FWDDECL)
#include <Modloader/app/structs/HueFocus.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HueFocus.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
