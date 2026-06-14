#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonInt_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonInt_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonInt_DEFINED)
#include <Modloader/app/structs/MoonInt__Fields.h>
#if defined(IL2CPP_STRUCT_MoonInt__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonInt_DEFINED
struct MoonInt__Class;
struct MoonInt {
    struct MoonInt__Class* klass;
    MonitorData* monitor;
    struct MoonInt__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonInt_FWDDECL)
#define IL2CPP_STRUCT_MoonInt_FWDDECL
#include <Modloader/app/structs/MoonInt__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonInt_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonInt_DEFINED) && !defined(IL2CPP_STRUCT_MoonInt_FWDDECL)
#include <Modloader/app/structs/MoonInt.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonInt.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
