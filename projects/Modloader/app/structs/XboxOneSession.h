#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneSession_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneSession_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneSession_DEFINED)
#define IL2CPP_STRUCT_XboxOneSession_DEFINED
struct XboxOneSession__Class;
struct XboxOneSession {
    struct XboxOneSession__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxOneSession_FWDDECL)
#define IL2CPP_STRUCT_XboxOneSession_FWDDECL
#include <Modloader/app/structs/XboxOneSession__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxOneSession_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneSession_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneSession_FWDDECL)
#include <Modloader/app/structs/XboxOneSession.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneSession.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
