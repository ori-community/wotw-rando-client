#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IContextReciever_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IContextReciever_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContextReciever_DEFINED)
#define IL2CPP_STRUCT_IContextReciever_DEFINED
struct IContextReciever__Class;
struct IContextReciever {
    struct IContextReciever__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IContextReciever_FWDDECL)
#define IL2CPP_STRUCT_IContextReciever_FWDDECL
#include <Modloader/app/structs/IContextReciever__Class.h>
#endif
#undef IL2CPP_STRUCT_IContextReciever_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContextReciever_DEFINED) && !defined(IL2CPP_STRUCT_IContextReciever_FWDDECL)
#include <Modloader/app/structs/IContextReciever.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IContextReciever.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
