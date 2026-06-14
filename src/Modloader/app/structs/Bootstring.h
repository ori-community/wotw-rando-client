#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bootstring_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bootstring_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bootstring_DEFINED)
#include <Modloader/app/structs/Bootstring__Fields.h>
#if defined(IL2CPP_STRUCT_Bootstring__Fields_DEFINED)
#define IL2CPP_STRUCT_Bootstring_DEFINED
struct Bootstring__Class;
struct Bootstring {
    struct Bootstring__Class* klass;
    MonitorData* monitor;
    struct Bootstring__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Bootstring_FWDDECL)
#define IL2CPP_STRUCT_Bootstring_FWDDECL
#include <Modloader/app/structs/Bootstring__Class.h>
#endif
#undef IL2CPP_STRUCT_Bootstring_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bootstring_DEFINED) && !defined(IL2CPP_STRUCT_Bootstring_FWDDECL)
#include <Modloader/app/structs/Bootstring.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bootstring.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
