#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmbienceListener_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmbienceListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbienceListener_DEFINED)
#include <Modloader/app/structs/AmbienceListener__Fields.h>
#if defined(IL2CPP_STRUCT_AmbienceListener__Fields_DEFINED)
#define IL2CPP_STRUCT_AmbienceListener_DEFINED
struct AmbienceListener__Class;
struct AmbienceListener {
    struct AmbienceListener__Class* klass;
    MonitorData* monitor;
    struct AmbienceListener__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmbienceListener_FWDDECL)
#define IL2CPP_STRUCT_AmbienceListener_FWDDECL
#include <Modloader/app/structs/AmbienceListener__Class.h>
#endif
#undef IL2CPP_STRUCT_AmbienceListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbienceListener_DEFINED) && !defined(IL2CPP_STRUCT_AmbienceListener_FWDDECL)
#include <Modloader/app/structs/AmbienceListener.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmbienceListener.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
