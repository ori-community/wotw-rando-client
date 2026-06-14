#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ErrorWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ErrorWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ErrorWrapper_DEFINED)
#include <Modloader/app/structs/ErrorWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_ErrorWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_ErrorWrapper_DEFINED
struct ErrorWrapper__Class;
struct ErrorWrapper {
    struct ErrorWrapper__Class* klass;
    MonitorData* monitor;
    struct ErrorWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ErrorWrapper_FWDDECL)
#define IL2CPP_STRUCT_ErrorWrapper_FWDDECL
#include <Modloader/app/structs/ErrorWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_ErrorWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ErrorWrapper_DEFINED) && !defined(IL2CPP_STRUCT_ErrorWrapper_FWDDECL)
#include <Modloader/app/structs/ErrorWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ErrorWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
