#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinHealthCurrentProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinHealthCurrentProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinHealthCurrentProvider_DEFINED)
#include <Modloader/app/structs/SeinHealthCurrentProvider__Fields.h>
#if defined(IL2CPP_STRUCT_SeinHealthCurrentProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinHealthCurrentProvider_DEFINED
struct SeinHealthCurrentProvider__Class;
struct SeinHealthCurrentProvider {
    struct SeinHealthCurrentProvider__Class* klass;
    MonitorData* monitor;
    struct SeinHealthCurrentProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinHealthCurrentProvider_FWDDECL)
#define IL2CPP_STRUCT_SeinHealthCurrentProvider_FWDDECL
#include <Modloader/app/structs/SeinHealthCurrentProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinHealthCurrentProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinHealthCurrentProvider_DEFINED) && !defined(IL2CPP_STRUCT_SeinHealthCurrentProvider_FWDDECL)
#include <Modloader/app/structs/SeinHealthCurrentProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinHealthCurrentProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
