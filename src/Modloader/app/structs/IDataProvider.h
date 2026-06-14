#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDataProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDataProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDataProvider_DEFINED)
#define IL2CPP_STRUCT_IDataProvider_DEFINED
struct IDataProvider__Class;
struct IDataProvider {
    struct IDataProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDataProvider_FWDDECL)
#define IL2CPP_STRUCT_IDataProvider_FWDDECL
#include <Modloader/app/structs/IDataProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IDataProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDataProvider_DEFINED) && !defined(IL2CPP_STRUCT_IDataProvider_FWDDECL)
#include <Modloader/app/structs/IDataProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDataProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
