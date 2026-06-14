#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILayoutGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILayoutGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILayoutGroup_DEFINED)
#define IL2CPP_STRUCT_ILayoutGroup_DEFINED
struct ILayoutGroup__Class;
struct ILayoutGroup {
    struct ILayoutGroup__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ILayoutGroup_FWDDECL)
#define IL2CPP_STRUCT_ILayoutGroup_FWDDECL
#include <Modloader/app/structs/ILayoutGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_ILayoutGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILayoutGroup_DEFINED) && !defined(IL2CPP_STRUCT_ILayoutGroup_FWDDECL)
#include <Modloader/app/structs/ILayoutGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILayoutGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
