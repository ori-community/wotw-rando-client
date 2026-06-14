#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILever_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILever_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILever_DEFINED)
#define IL2CPP_STRUCT_ILever_DEFINED
struct ILever__Class;
struct ILever {
    struct ILever__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ILever_FWDDECL)
#define IL2CPP_STRUCT_ILever_FWDDECL
#include <Modloader/app/structs/ILever__Class.h>
#endif
#undef IL2CPP_STRUCT_ILever_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILever_DEFINED) && !defined(IL2CPP_STRUCT_ILever_FWDDECL)
#include <Modloader/app/structs/ILever.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILever.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
