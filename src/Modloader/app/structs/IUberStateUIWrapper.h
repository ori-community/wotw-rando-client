#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IUberStateUIWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IUberStateUIWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUberStateUIWrapper_DEFINED)
#define IL2CPP_STRUCT_IUberStateUIWrapper_DEFINED
struct IUberStateUIWrapper__Class;
struct IUberStateUIWrapper {
    struct IUberStateUIWrapper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IUberStateUIWrapper_FWDDECL)
#define IL2CPP_STRUCT_IUberStateUIWrapper_FWDDECL
#include <Modloader/app/structs/IUberStateUIWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_IUberStateUIWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUberStateUIWrapper_DEFINED) && !defined(IL2CPP_STRUCT_IUberStateUIWrapper_FWDDECL)
#include <Modloader/app/structs/IUberStateUIWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IUberStateUIWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
