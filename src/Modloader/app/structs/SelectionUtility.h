#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SelectionUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SelectionUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelectionUtility_DEFINED)
#define IL2CPP_STRUCT_SelectionUtility_DEFINED
struct SelectionUtility__Class;
struct SelectionUtility {
    struct SelectionUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SelectionUtility_FWDDECL)
#define IL2CPP_STRUCT_SelectionUtility_FWDDECL
#include <Modloader/app/structs/SelectionUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_SelectionUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelectionUtility_DEFINED) && !defined(IL2CPP_STRUCT_SelectionUtility_FWDDECL)
#include <Modloader/app/structs/SelectionUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SelectionUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
