#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Exception_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Exception_INITIALIZING
#if !defined(IL2CPP_STRUCT_Exception_DEFINED)
#include <Modloader/app/structs/Exception__Fields.h>
#if defined(IL2CPP_STRUCT_Exception__Fields_DEFINED)
#define IL2CPP_STRUCT_Exception_DEFINED
struct Exception__Class;
struct Exception {
    struct Exception__Class* klass;
    MonitorData* monitor;
    struct Exception__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Exception_FWDDECL)
#define IL2CPP_STRUCT_Exception_FWDDECL
#include <Modloader/app/structs/Exception__Class.h>
#endif
#undef IL2CPP_STRUCT_Exception_INITIALIZING
#if !defined(IL2CPP_STRUCT_Exception_DEFINED) && !defined(IL2CPP_STRUCT_Exception_FWDDECL)
#include <Modloader/app/structs/Exception.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Exception.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
