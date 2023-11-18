#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IWebRequestCreate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IWebRequestCreate_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWebRequestCreate_DEFINED)
#define IL2CPP_STRUCT_IWebRequestCreate_DEFINED
struct IWebRequestCreate__Class;
struct IWebRequestCreate {
    struct IWebRequestCreate__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IWebRequestCreate_FWDDECL)
#define IL2CPP_STRUCT_IWebRequestCreate_FWDDECL
#include <Modloader/app/structs/IWebRequestCreate__Class.h>
#endif
#undef IL2CPP_STRUCT_IWebRequestCreate_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWebRequestCreate_DEFINED) && !defined(IL2CPP_STRUCT_IWebRequestCreate_FWDDECL)
#include <Modloader/app/structs/IWebRequestCreate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IWebRequestCreate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
