#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneRichPresence_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneRichPresence_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneRichPresence_DEFINED)
#define IL2CPP_STRUCT_XboxOneRichPresence_DEFINED
struct XboxOneRichPresence__Class;
struct XboxOneRichPresence {
    struct XboxOneRichPresence__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxOneRichPresence_FWDDECL)
#define IL2CPP_STRUCT_XboxOneRichPresence_FWDDECL
#include <Modloader/app/structs/XboxOneRichPresence__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxOneRichPresence_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneRichPresence_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneRichPresence_FWDDECL)
#include <Modloader/app/structs/XboxOneRichPresence.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneRichPresence.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
