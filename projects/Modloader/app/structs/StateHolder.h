#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateHolder_DEFINED)
#include <Modloader/app/structs/StateHolder__Fields.h>
#if defined(IL2CPP_STRUCT_StateHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_StateHolder_DEFINED
struct StateHolder__Class;
struct StateHolder {
    struct StateHolder__Class* klass;
    MonitorData* monitor;
    struct StateHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateHolder_FWDDECL)
#define IL2CPP_STRUCT_StateHolder_FWDDECL
#include <Modloader/app/structs/StateHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_StateHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateHolder_DEFINED) && !defined(IL2CPP_STRUCT_StateHolder_FWDDECL)
#include <Modloader/app/structs/StateHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
