#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoType_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoType_DEFINED)
#include <Modloader/app/structs/MonoType__Fields.h>
#if defined(IL2CPP_STRUCT_MonoType__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoType_DEFINED
struct MonoType__Class;
struct MonoType {
    struct MonoType__Class* klass;
    MonitorData* monitor;
    struct MonoType__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoType_FWDDECL)
#define IL2CPP_STRUCT_MonoType_FWDDECL
#include <Modloader/app/structs/MonoType__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoType_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoType_DEFINED) && !defined(IL2CPP_STRUCT_MonoType_FWDDECL)
#include <Modloader/app/structs/MonoType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
