#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DestroyOnMenuOpen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DestroyOnMenuOpen_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyOnMenuOpen_DEFINED)
#include <Modloader/app/structs/DestroyOnMenuOpen__Fields.h>
#if defined(IL2CPP_STRUCT_DestroyOnMenuOpen__Fields_DEFINED)
#define IL2CPP_STRUCT_DestroyOnMenuOpen_DEFINED
struct DestroyOnMenuOpen__Class;
struct DestroyOnMenuOpen {
    struct DestroyOnMenuOpen__Class* klass;
    MonitorData* monitor;
    struct DestroyOnMenuOpen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DestroyOnMenuOpen_FWDDECL)
#define IL2CPP_STRUCT_DestroyOnMenuOpen_FWDDECL
#include <Modloader/app/structs/DestroyOnMenuOpen__Class.h>
#endif
#undef IL2CPP_STRUCT_DestroyOnMenuOpen_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyOnMenuOpen_DEFINED) && !defined(IL2CPP_STRUCT_DestroyOnMenuOpen_FWDDECL)
#include <Modloader/app/structs/DestroyOnMenuOpen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DestroyOnMenuOpen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
