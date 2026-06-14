#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GridLayoutGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GridLayoutGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_GridLayoutGroup_DEFINED)
#include <Modloader/app/structs/GridLayoutGroup__Fields.h>
#if defined(IL2CPP_STRUCT_GridLayoutGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_GridLayoutGroup_DEFINED
struct GridLayoutGroup__Class;
struct GridLayoutGroup {
    struct GridLayoutGroup__Class* klass;
    MonitorData* monitor;
    struct GridLayoutGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GridLayoutGroup_FWDDECL)
#define IL2CPP_STRUCT_GridLayoutGroup_FWDDECL
#include <Modloader/app/structs/GridLayoutGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_GridLayoutGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_GridLayoutGroup_DEFINED) && !defined(IL2CPP_STRUCT_GridLayoutGroup_FWDDECL)
#include <Modloader/app/structs/GridLayoutGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GridLayoutGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
