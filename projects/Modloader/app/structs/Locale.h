#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Locale_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Locale_INITIALIZING
#if !defined(IL2CPP_STRUCT_Locale_DEFINED)
#define IL2CPP_STRUCT_Locale_DEFINED
struct Locale__Class;
struct Locale {
    struct Locale__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Locale_FWDDECL)
#define IL2CPP_STRUCT_Locale_FWDDECL
#include <Modloader/app/structs/Locale__Class.h>
#endif
#undef IL2CPP_STRUCT_Locale_INITIALIZING
#if !defined(IL2CPP_STRUCT_Locale_DEFINED) && !defined(IL2CPP_STRUCT_Locale_FWDDECL)
#include <Modloader/app/structs/Locale.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Locale.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
