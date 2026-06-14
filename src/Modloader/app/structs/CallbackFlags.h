#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallbackFlags_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallbackFlags_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallbackFlags_DEFINED)
#include <Modloader/app/structs/CallbackFlags__Fields.h>
#if defined(IL2CPP_STRUCT_CallbackFlags__Fields_DEFINED)
#define IL2CPP_STRUCT_CallbackFlags_DEFINED
struct CallbackFlags__Class;
struct CallbackFlags {
    struct CallbackFlags__Class* klass;
    MonitorData* monitor;
    struct CallbackFlags__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CallbackFlags_FWDDECL)
#define IL2CPP_STRUCT_CallbackFlags_FWDDECL
#include <Modloader/app/structs/CallbackFlags__Class.h>
#endif
#undef IL2CPP_STRUCT_CallbackFlags_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallbackFlags_DEFINED) && !defined(IL2CPP_STRUCT_CallbackFlags_FWDDECL)
#include <Modloader/app/structs/CallbackFlags.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallbackFlags.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
