#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IUberStateGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IUberStateGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUberStateGroup_DEFINED)
#define IL2CPP_STRUCT_IUberStateGroup_DEFINED
struct IUberStateGroup__Class;
struct IUberStateGroup {
    struct IUberStateGroup__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IUberStateGroup_FWDDECL)
#define IL2CPP_STRUCT_IUberStateGroup_FWDDECL
#include <Modloader/app/structs/IUberStateGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_IUberStateGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUberStateGroup_DEFINED) && !defined(IL2CPP_STRUCT_IUberStateGroup_FWDDECL)
#include <Modloader/app/structs/IUberStateGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IUberStateGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
