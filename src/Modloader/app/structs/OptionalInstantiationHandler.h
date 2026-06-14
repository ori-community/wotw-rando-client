#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OptionalInstantiationHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OptionalInstantiationHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionalInstantiationHandler_DEFINED)
#include <Modloader/app/structs/OptionalInstantiationHandler__Fields.h>
#if defined(IL2CPP_STRUCT_OptionalInstantiationHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_OptionalInstantiationHandler_DEFINED
struct OptionalInstantiationHandler__Class;
struct OptionalInstantiationHandler {
    struct OptionalInstantiationHandler__Class* klass;
    MonitorData* monitor;
    struct OptionalInstantiationHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OptionalInstantiationHandler_FWDDECL)
#define IL2CPP_STRUCT_OptionalInstantiationHandler_FWDDECL
#include <Modloader/app/structs/OptionalInstantiationHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_OptionalInstantiationHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionalInstantiationHandler_DEFINED) && !defined(IL2CPP_STRUCT_OptionalInstantiationHandler_FWDDECL)
#include <Modloader/app/structs/OptionalInstantiationHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OptionalInstantiationHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
