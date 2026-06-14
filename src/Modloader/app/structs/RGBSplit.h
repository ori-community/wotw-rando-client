#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RGBSplit_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RGBSplit_INITIALIZING
#if !defined(IL2CPP_STRUCT_RGBSplit_DEFINED)
#include <Modloader/app/structs/RGBSplit__Fields.h>
#if defined(IL2CPP_STRUCT_RGBSplit__Fields_DEFINED)
#define IL2CPP_STRUCT_RGBSplit_DEFINED
struct RGBSplit__Class;
struct RGBSplit {
    struct RGBSplit__Class* klass;
    MonitorData* monitor;
    struct RGBSplit__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RGBSplit_FWDDECL)
#define IL2CPP_STRUCT_RGBSplit_FWDDECL
#include <Modloader/app/structs/RGBSplit__Class.h>
#endif
#undef IL2CPP_STRUCT_RGBSplit_INITIALIZING
#if !defined(IL2CPP_STRUCT_RGBSplit_DEFINED) && !defined(IL2CPP_STRUCT_RGBSplit_FWDDECL)
#include <Modloader/app/structs/RGBSplit.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RGBSplit.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
