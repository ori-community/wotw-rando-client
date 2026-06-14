#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Technicolor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Technicolor_INITIALIZING
#if !defined(IL2CPP_STRUCT_Technicolor_DEFINED)
#include <Modloader/app/structs/Technicolor__Fields.h>
#if defined(IL2CPP_STRUCT_Technicolor__Fields_DEFINED)
#define IL2CPP_STRUCT_Technicolor_DEFINED
struct Technicolor__Class;
struct Technicolor {
    struct Technicolor__Class* klass;
    MonitorData* monitor;
    struct Technicolor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Technicolor_FWDDECL)
#define IL2CPP_STRUCT_Technicolor_FWDDECL
#include <Modloader/app/structs/Technicolor__Class.h>
#endif
#undef IL2CPP_STRUCT_Technicolor_INITIALIZING
#if !defined(IL2CPP_STRUCT_Technicolor_DEFINED) && !defined(IL2CPP_STRUCT_Technicolor_FWDDECL)
#include <Modloader/app/structs/Technicolor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Technicolor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
