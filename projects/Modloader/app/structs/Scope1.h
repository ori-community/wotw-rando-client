#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Scope1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Scope1_INITIALIZING
#if !defined(IL2CPP_STRUCT_Scope1_DEFINED)
#include <Modloader/app/structs/Scope1__Fields.h>
#if defined(IL2CPP_STRUCT_Scope1__Fields_DEFINED)
#define IL2CPP_STRUCT_Scope1_DEFINED
struct Scope1__Class;
struct Scope1 {
    struct Scope1__Class* klass;
    MonitorData* monitor;
    struct Scope1__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Scope1_FWDDECL)
#define IL2CPP_STRUCT_Scope1_FWDDECL
#include <Modloader/app/structs/Scope1__Class.h>
#endif
#undef IL2CPP_STRUCT_Scope1_INITIALIZING
#if !defined(IL2CPP_STRUCT_Scope1_DEFINED) && !defined(IL2CPP_STRUCT_Scope1_FWDDECL)
#include <Modloader/app/structs/Scope1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Scope1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
