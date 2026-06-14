#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Comparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Comparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Comparer_DEFINED)
#include <Modloader/app/structs/Comparer__Fields.h>
#if defined(IL2CPP_STRUCT_Comparer__Fields_DEFINED)
#define IL2CPP_STRUCT_Comparer_DEFINED
struct Comparer__Class;
struct Comparer {
    struct Comparer__Class* klass;
    MonitorData* monitor;
    struct Comparer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Comparer_FWDDECL)
#define IL2CPP_STRUCT_Comparer_FWDDECL
#include <Modloader/app/structs/Comparer__Class.h>
#endif
#undef IL2CPP_STRUCT_Comparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Comparer_DEFINED) && !defined(IL2CPP_STRUCT_Comparer_FWDDECL)
#include <Modloader/app/structs/Comparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Comparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
