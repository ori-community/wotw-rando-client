#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Frost_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Frost_INITIALIZING
#if !defined(IL2CPP_STRUCT_Frost_DEFINED)
#include <Modloader/app/structs/Frost__Fields.h>
#if defined(IL2CPP_STRUCT_Frost__Fields_DEFINED)
#define IL2CPP_STRUCT_Frost_DEFINED
struct Frost__Class;
struct Frost {
    struct Frost__Class* klass;
    MonitorData* monitor;
    struct Frost__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Frost_FWDDECL)
#define IL2CPP_STRUCT_Frost_FWDDECL
#include <Modloader/app/structs/Frost__Class.h>
#endif
#undef IL2CPP_STRUCT_Frost_INITIALIZING
#if !defined(IL2CPP_STRUCT_Frost_DEFINED) && !defined(IL2CPP_STRUCT_Frost_FWDDECL)
#include <Modloader/app/structs/Frost.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Frost.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
