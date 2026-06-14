#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerPrefsException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerPrefsException_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPrefsException_DEFINED)
#include <Modloader/app/structs/PlayerPrefsException__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerPrefsException__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerPrefsException_DEFINED
struct PlayerPrefsException__Class;
struct PlayerPrefsException {
    struct PlayerPrefsException__Class* klass;
    MonitorData* monitor;
    struct PlayerPrefsException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerPrefsException_FWDDECL)
#define IL2CPP_STRUCT_PlayerPrefsException_FWDDECL
#include <Modloader/app/structs/PlayerPrefsException__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerPrefsException_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPrefsException_DEFINED) && !defined(IL2CPP_STRUCT_PlayerPrefsException_FWDDECL)
#include <Modloader/app/structs/PlayerPrefsException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerPrefsException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
