#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OneShotEmitter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OneShotEmitter_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneShotEmitter_DEFINED)
#include <Modloader/app/structs/OneShotEmitter__Fields.h>
#if defined(IL2CPP_STRUCT_OneShotEmitter__Fields_DEFINED)
#define IL2CPP_STRUCT_OneShotEmitter_DEFINED
struct OneShotEmitter__Class;
struct OneShotEmitter {
    struct OneShotEmitter__Class* klass;
    MonitorData* monitor;
    struct OneShotEmitter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OneShotEmitter_FWDDECL)
#define IL2CPP_STRUCT_OneShotEmitter_FWDDECL
#include <Modloader/app/structs/OneShotEmitter__Class.h>
#endif
#undef IL2CPP_STRUCT_OneShotEmitter_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneShotEmitter_DEFINED) && !defined(IL2CPP_STRUCT_OneShotEmitter_FWDDECL)
#include <Modloader/app/structs/OneShotEmitter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OneShotEmitter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
