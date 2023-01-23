#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDataEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDataEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDataEvent_DEFINED)
#define IL2CPP_STRUCT_IDataEvent_DEFINED
struct IDataEvent__Class;
struct IDataEvent {
    struct IDataEvent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDataEvent_FWDDECL)
#define IL2CPP_STRUCT_IDataEvent_FWDDECL
#include <Modloader/app/structs/IDataEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_IDataEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDataEvent_DEFINED) && !defined(IL2CPP_STRUCT_IDataEvent_FWDDECL)
#include <Modloader/app/structs/IDataEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDataEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
