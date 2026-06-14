#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Finger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Finger_INITIALIZING
#if !defined(IL2CPP_STRUCT_Finger_DEFINED)
#include <Modloader/app/structs/Finger__Fields.h>
#if defined(IL2CPP_STRUCT_Finger__Fields_DEFINED)
#define IL2CPP_STRUCT_Finger_DEFINED
struct Finger__Class;
struct Finger {
    struct Finger__Class* klass;
    MonitorData* monitor;
    struct Finger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Finger_FWDDECL)
#define IL2CPP_STRUCT_Finger_FWDDECL
#include <Modloader/app/structs/Finger__Class.h>
#endif
#undef IL2CPP_STRUCT_Finger_INITIALIZING
#if !defined(IL2CPP_STRUCT_Finger_DEFINED) && !defined(IL2CPP_STRUCT_Finger_FWDDECL)
#include <Modloader/app/structs/Finger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Finger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
