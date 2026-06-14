#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BTContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BTContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_BTContext_DEFINED)
#include <Modloader/app/structs/BTContext__Fields.h>
#if defined(IL2CPP_STRUCT_BTContext__Fields_DEFINED)
#define IL2CPP_STRUCT_BTContext_DEFINED
struct BTContext__Class;
struct BTContext {
    struct BTContext__Class* klass;
    MonitorData* monitor;
    struct BTContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BTContext_FWDDECL)
#define IL2CPP_STRUCT_BTContext_FWDDECL
#include <Modloader/app/structs/BTContext__Class.h>
#endif
#undef IL2CPP_STRUCT_BTContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_BTContext_DEFINED) && !defined(IL2CPP_STRUCT_BTContext_FWDDECL)
#include <Modloader/app/structs/BTContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BTContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
