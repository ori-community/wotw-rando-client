#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinCrouch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinCrouch_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCrouch_DEFINED)
#include <Modloader/app/structs/SeinCrouch__Fields.h>
#if defined(IL2CPP_STRUCT_SeinCrouch__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinCrouch_DEFINED
struct SeinCrouch__Class;
struct SeinCrouch {
    struct SeinCrouch__Class* klass;
    MonitorData* monitor;
    struct SeinCrouch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinCrouch_FWDDECL)
#define IL2CPP_STRUCT_SeinCrouch_FWDDECL
#include <Modloader/app/structs/SeinCrouch__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinCrouch_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCrouch_DEFINED) && !defined(IL2CPP_STRUCT_SeinCrouch_FWDDECL)
#include <Modloader/app/structs/SeinCrouch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinCrouch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
