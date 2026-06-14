#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValueInComponentProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValueInComponentProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueInComponentProvider_DEFINED)
#include <Modloader/app/structs/ValueInComponentProvider__Fields.h>
#if defined(IL2CPP_STRUCT_ValueInComponentProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_ValueInComponentProvider_DEFINED
struct ValueInComponentProvider__Class;
struct ValueInComponentProvider {
    struct ValueInComponentProvider__Class* klass;
    MonitorData* monitor;
    struct ValueInComponentProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValueInComponentProvider_FWDDECL)
#define IL2CPP_STRUCT_ValueInComponentProvider_FWDDECL
#include <Modloader/app/structs/ValueInComponentProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_ValueInComponentProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueInComponentProvider_DEFINED) && !defined(IL2CPP_STRUCT_ValueInComponentProvider_FWDDECL)
#include <Modloader/app/structs/ValueInComponentProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValueInComponentProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
