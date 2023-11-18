#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GridLayout_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GridLayout_INITIALIZING
#if !defined(IL2CPP_STRUCT_GridLayout_DEFINED)
#include <Modloader/app/structs/GridLayout__Fields.h>
#if defined(IL2CPP_STRUCT_GridLayout__Fields_DEFINED)
#define IL2CPP_STRUCT_GridLayout_DEFINED
struct GridLayout__Class;
struct GridLayout {
    struct GridLayout__Class* klass;
    MonitorData* monitor;
    struct GridLayout__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GridLayout_FWDDECL)
#define IL2CPP_STRUCT_GridLayout_FWDDECL
#include <Modloader/app/structs/GridLayout__Class.h>
#endif
#undef IL2CPP_STRUCT_GridLayout_INITIALIZING
#if !defined(IL2CPP_STRUCT_GridLayout_DEFINED) && !defined(IL2CPP_STRUCT_GridLayout_FWDDECL)
#include <Modloader/app/structs/GridLayout.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GridLayout.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
