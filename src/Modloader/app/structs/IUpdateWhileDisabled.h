#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IUpdateWhileDisabled_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IUpdateWhileDisabled_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUpdateWhileDisabled_DEFINED)
#define IL2CPP_STRUCT_IUpdateWhileDisabled_DEFINED
struct IUpdateWhileDisabled__Class;
struct IUpdateWhileDisabled {
    struct IUpdateWhileDisabled__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IUpdateWhileDisabled_FWDDECL)
#define IL2CPP_STRUCT_IUpdateWhileDisabled_FWDDECL
#include <Modloader/app/structs/IUpdateWhileDisabled__Class.h>
#endif
#undef IL2CPP_STRUCT_IUpdateWhileDisabled_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUpdateWhileDisabled_DEFINED) && !defined(IL2CPP_STRUCT_IUpdateWhileDisabled_FWDDECL)
#include <Modloader/app/structs/IUpdateWhileDisabled.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IUpdateWhileDisabled.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
