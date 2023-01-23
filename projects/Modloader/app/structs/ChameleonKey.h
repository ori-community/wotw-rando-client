#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChameleonKey_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChameleonKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChameleonKey_DEFINED)
#include <Modloader/app/structs/ChameleonKey__Fields.h>
#if defined(IL2CPP_STRUCT_ChameleonKey__Fields_DEFINED)
#define IL2CPP_STRUCT_ChameleonKey_DEFINED
struct ChameleonKey__Class;
struct ChameleonKey {
    struct ChameleonKey__Class* klass;
    MonitorData* monitor;
    struct ChameleonKey__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChameleonKey_FWDDECL)
#define IL2CPP_STRUCT_ChameleonKey_FWDDECL
#include <Modloader/app/structs/ChameleonKey__Class.h>
#endif
#undef IL2CPP_STRUCT_ChameleonKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChameleonKey_DEFINED) && !defined(IL2CPP_STRUCT_ChameleonKey_FWDDECL)
#include <Modloader/app/structs/ChameleonKey.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChameleonKey.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
