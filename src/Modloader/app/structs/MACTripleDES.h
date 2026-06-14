#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MACTripleDES_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MACTripleDES_INITIALIZING
#if !defined(IL2CPP_STRUCT_MACTripleDES_DEFINED)
#include <Modloader/app/structs/MACTripleDES__Fields.h>
#if defined(IL2CPP_STRUCT_MACTripleDES__Fields_DEFINED)
#define IL2CPP_STRUCT_MACTripleDES_DEFINED
struct MACTripleDES__Class;
struct MACTripleDES {
    struct MACTripleDES__Class* klass;
    MonitorData* monitor;
    struct MACTripleDES__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MACTripleDES_FWDDECL)
#define IL2CPP_STRUCT_MACTripleDES_FWDDECL
#include <Modloader/app/structs/MACTripleDES__Class.h>
#endif
#undef IL2CPP_STRUCT_MACTripleDES_INITIALIZING
#if !defined(IL2CPP_STRUCT_MACTripleDES_DEFINED) && !defined(IL2CPP_STRUCT_MACTripleDES_FWDDECL)
#include <Modloader/app/structs/MACTripleDES.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MACTripleDES.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
