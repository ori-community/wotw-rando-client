#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalThread_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalThread_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalThread_DEFINED)
#include <Modloader/app/structs/InternalThread__Fields.h>
#if defined(IL2CPP_STRUCT_InternalThread__Fields_DEFINED)
#define IL2CPP_STRUCT_InternalThread_DEFINED
struct InternalThread__Class;
struct InternalThread {
    struct InternalThread__Class* klass;
    MonitorData* monitor;
    struct InternalThread__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InternalThread_FWDDECL)
#define IL2CPP_STRUCT_InternalThread_FWDDECL
#include <Modloader/app/structs/InternalThread__Class.h>
#endif
#undef IL2CPP_STRUCT_InternalThread_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalThread_DEFINED) && !defined(IL2CPP_STRUCT_InternalThread_FWDDECL)
#include <Modloader/app/structs/InternalThread.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalThread.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
