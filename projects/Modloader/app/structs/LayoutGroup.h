#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LayoutGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LayoutGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayoutGroup_DEFINED)
#include <Modloader/app/structs/LayoutGroup__Fields.h>
#if defined(IL2CPP_STRUCT_LayoutGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_LayoutGroup_DEFINED
struct LayoutGroup__Class;
struct LayoutGroup {
    struct LayoutGroup__Class* klass;
    MonitorData* monitor;
    struct LayoutGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LayoutGroup_FWDDECL)
#define IL2CPP_STRUCT_LayoutGroup_FWDDECL
#include <Modloader/app/structs/LayoutGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_LayoutGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayoutGroup_DEFINED) && !defined(IL2CPP_STRUCT_LayoutGroup_FWDDECL)
#include <Modloader/app/structs/LayoutGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LayoutGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
