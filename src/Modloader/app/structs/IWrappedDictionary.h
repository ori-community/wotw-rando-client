#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IWrappedDictionary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IWrappedDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWrappedDictionary_DEFINED)
#define IL2CPP_STRUCT_IWrappedDictionary_DEFINED
struct IWrappedDictionary__Class;
struct IWrappedDictionary {
    struct IWrappedDictionary__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IWrappedDictionary_FWDDECL)
#define IL2CPP_STRUCT_IWrappedDictionary_FWDDECL
#include <Modloader/app/structs/IWrappedDictionary__Class.h>
#endif
#undef IL2CPP_STRUCT_IWrappedDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWrappedDictionary_DEFINED) && !defined(IL2CPP_STRUCT_IWrappedDictionary_FWDDECL)
#include <Modloader/app/structs/IWrappedDictionary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IWrappedDictionary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
