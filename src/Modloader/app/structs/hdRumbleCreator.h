#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_hdRumbleCreator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_hdRumbleCreator_INITIALIZING
#if !defined(IL2CPP_STRUCT_hdRumbleCreator_DEFINED)
#define IL2CPP_STRUCT_hdRumbleCreator_DEFINED
struct hdRumbleCreator__Class;
struct hdRumbleCreator {
    struct hdRumbleCreator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_hdRumbleCreator_FWDDECL)
#define IL2CPP_STRUCT_hdRumbleCreator_FWDDECL
#include <Modloader/app/structs/hdRumbleCreator__Class.h>
#endif
#undef IL2CPP_STRUCT_hdRumbleCreator_INITIALIZING
#if !defined(IL2CPP_STRUCT_hdRumbleCreator_DEFINED) && !defined(IL2CPP_STRUCT_hdRumbleCreator_FWDDECL)
#include <Modloader/app/structs/hdRumbleCreator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/hdRumbleCreator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
