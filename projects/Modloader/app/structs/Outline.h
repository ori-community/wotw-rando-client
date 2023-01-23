#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Outline_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Outline_INITIALIZING
#if !defined(IL2CPP_STRUCT_Outline_DEFINED)
#include <Modloader/app/structs/Outline__Fields.h>
#if defined(IL2CPP_STRUCT_Outline__Fields_DEFINED)
#define IL2CPP_STRUCT_Outline_DEFINED
struct Outline__Class;
struct Outline {
    struct Outline__Class* klass;
    MonitorData* monitor;
    struct Outline__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Outline_FWDDECL)
#define IL2CPP_STRUCT_Outline_FWDDECL
#include <Modloader/app/structs/Outline__Class.h>
#endif
#undef IL2CPP_STRUCT_Outline_INITIALIZING
#if !defined(IL2CPP_STRUCT_Outline_DEFINED) && !defined(IL2CPP_STRUCT_Outline_FWDDECL)
#include <Modloader/app/structs/Outline.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Outline.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
