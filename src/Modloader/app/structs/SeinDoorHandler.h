#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDoorHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDoorHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDoorHandler_DEFINED)
#include <Modloader/app/structs/SeinDoorHandler__Fields.h>
#if defined(IL2CPP_STRUCT_SeinDoorHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinDoorHandler_DEFINED
struct SeinDoorHandler__Class;
struct SeinDoorHandler {
    struct SeinDoorHandler__Class* klass;
    MonitorData* monitor;
    struct SeinDoorHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDoorHandler_FWDDECL)
#define IL2CPP_STRUCT_SeinDoorHandler_FWDDECL
#include <Modloader/app/structs/SeinDoorHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinDoorHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDoorHandler_DEFINED) && !defined(IL2CPP_STRUCT_SeinDoorHandler_FWDDECL)
#include <Modloader/app/structs/SeinDoorHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDoorHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
