#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DieOnTouch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DieOnTouch_INITIALIZING
#if !defined(IL2CPP_STRUCT_DieOnTouch_DEFINED)
#include <Modloader/app/structs/DieOnTouch__Fields.h>
#if defined(IL2CPP_STRUCT_DieOnTouch__Fields_DEFINED)
#define IL2CPP_STRUCT_DieOnTouch_DEFINED
struct DieOnTouch__Class;
struct DieOnTouch {
    struct DieOnTouch__Class* klass;
    MonitorData* monitor;
    struct DieOnTouch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DieOnTouch_FWDDECL)
#define IL2CPP_STRUCT_DieOnTouch_FWDDECL
#include <Modloader/app/structs/DieOnTouch__Class.h>
#endif
#undef IL2CPP_STRUCT_DieOnTouch_INITIALIZING
#if !defined(IL2CPP_STRUCT_DieOnTouch_DEFINED) && !defined(IL2CPP_STRUCT_DieOnTouch_FWDDECL)
#include <Modloader/app/structs/DieOnTouch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DieOnTouch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
