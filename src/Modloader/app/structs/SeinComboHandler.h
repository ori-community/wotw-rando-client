#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinComboHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinComboHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinComboHandler_DEFINED)
#include <Modloader/app/structs/SeinComboHandler__Fields.h>
#if defined(IL2CPP_STRUCT_SeinComboHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinComboHandler_DEFINED
struct SeinComboHandler__Class;
struct SeinComboHandler {
    struct SeinComboHandler__Class* klass;
    MonitorData* monitor;
    struct SeinComboHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinComboHandler_FWDDECL)
#define IL2CPP_STRUCT_SeinComboHandler_FWDDECL
#include <Modloader/app/structs/SeinComboHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinComboHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinComboHandler_DEFINED) && !defined(IL2CPP_STRUCT_SeinComboHandler_FWDDECL)
#include <Modloader/app/structs/SeinComboHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinComboHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
