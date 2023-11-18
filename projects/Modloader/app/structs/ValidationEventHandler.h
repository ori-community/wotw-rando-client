#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidationEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidationEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationEventHandler_DEFINED)
#include <Modloader/app/structs/ValidationEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_ValidationEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_ValidationEventHandler_DEFINED
struct ValidationEventHandler__Class;
struct ValidationEventHandler {
    struct ValidationEventHandler__Class* klass;
    MonitorData* monitor;
    struct ValidationEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValidationEventHandler_FWDDECL)
#define IL2CPP_STRUCT_ValidationEventHandler_FWDDECL
#include <Modloader/app/structs/ValidationEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_ValidationEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_ValidationEventHandler_FWDDECL)
#include <Modloader/app/structs/ValidationEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidationEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
