#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSenseInteractionHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSenseInteractionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSenseInteractionHandler_DEFINED)
#include <Modloader/app/structs/SeinSenseInteractionHandler__Fields.h>
#if defined(IL2CPP_STRUCT_SeinSenseInteractionHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinSenseInteractionHandler_DEFINED
struct SeinSenseInteractionHandler__Class;
struct SeinSenseInteractionHandler {
    struct SeinSenseInteractionHandler__Class* klass;
    MonitorData* monitor;
    struct SeinSenseInteractionHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSenseInteractionHandler_FWDDECL)
#define IL2CPP_STRUCT_SeinSenseInteractionHandler_FWDDECL
#include <Modloader/app/structs/SeinSenseInteractionHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinSenseInteractionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSenseInteractionHandler_DEFINED) && !defined(IL2CPP_STRUCT_SeinSenseInteractionHandler_FWDDECL)
#include <Modloader/app/structs/SeinSenseInteractionHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSenseInteractionHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
