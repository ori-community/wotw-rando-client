#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Letterbox_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Letterbox_INITIALIZING
#if !defined(IL2CPP_STRUCT_Letterbox_DEFINED)
#include <Modloader/app/structs/Letterbox__Fields.h>
#if defined(IL2CPP_STRUCT_Letterbox__Fields_DEFINED)
#define IL2CPP_STRUCT_Letterbox_DEFINED
struct Letterbox__Class;
struct Letterbox {
    struct Letterbox__Class* klass;
    MonitorData* monitor;
    struct Letterbox__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Letterbox_FWDDECL)
#define IL2CPP_STRUCT_Letterbox_FWDDECL
#include <Modloader/app/structs/Letterbox__Class.h>
#endif
#undef IL2CPP_STRUCT_Letterbox_INITIALIZING
#if !defined(IL2CPP_STRUCT_Letterbox_DEFINED) && !defined(IL2CPP_STRUCT_Letterbox_FWDDECL)
#include <Modloader/app/structs/Letterbox.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Letterbox.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
