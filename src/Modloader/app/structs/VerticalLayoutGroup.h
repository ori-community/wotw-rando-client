#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerticalLayoutGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerticalLayoutGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerticalLayoutGroup_DEFINED)
#include <Modloader/app/structs/VerticalLayoutGroup__Fields.h>
#if defined(IL2CPP_STRUCT_VerticalLayoutGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_VerticalLayoutGroup_DEFINED
struct VerticalLayoutGroup__Class;
struct VerticalLayoutGroup {
    struct VerticalLayoutGroup__Class* klass;
    MonitorData* monitor;
    struct VerticalLayoutGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerticalLayoutGroup_FWDDECL)
#define IL2CPP_STRUCT_VerticalLayoutGroup_FWDDECL
#include <Modloader/app/structs/VerticalLayoutGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_VerticalLayoutGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerticalLayoutGroup_DEFINED) && !defined(IL2CPP_STRUCT_VerticalLayoutGroup_FWDDECL)
#include <Modloader/app/structs/VerticalLayoutGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerticalLayoutGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
