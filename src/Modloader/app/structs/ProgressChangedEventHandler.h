#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProgressChangedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProgressChangedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProgressChangedEventHandler_DEFINED)
#include <Modloader/app/structs/ProgressChangedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_ProgressChangedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_ProgressChangedEventHandler_DEFINED
struct ProgressChangedEventHandler__Class;
struct ProgressChangedEventHandler {
    struct ProgressChangedEventHandler__Class* klass;
    MonitorData* monitor;
    struct ProgressChangedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProgressChangedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_ProgressChangedEventHandler_FWDDECL
#include <Modloader/app/structs/ProgressChangedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_ProgressChangedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProgressChangedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_ProgressChangedEventHandler_FWDDECL)
#include <Modloader/app/structs/ProgressChangedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProgressChangedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
