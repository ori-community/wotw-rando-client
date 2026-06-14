#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfigHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfigHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigHandler_DEFINED)
#include <Modloader/app/structs/ConfigHandler__Fields.h>
#if defined(IL2CPP_STRUCT_ConfigHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_ConfigHandler_DEFINED
struct ConfigHandler__Class;
struct ConfigHandler {
    struct ConfigHandler__Class* klass;
    MonitorData* monitor;
    struct ConfigHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConfigHandler_FWDDECL)
#define IL2CPP_STRUCT_ConfigHandler_FWDDECL
#include <Modloader/app/structs/ConfigHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_ConfigHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigHandler_DEFINED) && !defined(IL2CPP_STRUCT_ConfigHandler_FWDDECL)
#include <Modloader/app/structs/ConfigHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfigHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
