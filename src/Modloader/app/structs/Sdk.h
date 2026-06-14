#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Sdk_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Sdk_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sdk_DEFINED)
#include <Modloader/app/structs/Sdk__Fields.h>
#if defined(IL2CPP_STRUCT_Sdk__Fields_DEFINED)
#define IL2CPP_STRUCT_Sdk_DEFINED
struct Sdk__Class;
struct Sdk {
    struct Sdk__Class* klass;
    MonitorData* monitor;
    struct Sdk__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Sdk_FWDDECL)
#define IL2CPP_STRUCT_Sdk_FWDDECL
#include <Modloader/app/structs/Sdk__Class.h>
#endif
#undef IL2CPP_STRUCT_Sdk_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sdk_DEFINED) && !defined(IL2CPP_STRUCT_Sdk_FWDDECL)
#include <Modloader/app/structs/Sdk.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Sdk.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SDK_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SDK_INITIALIZING
#if !defined(IL2CPP_STRUCT_SDK_DEFINED)
#define IL2CPP_STRUCT_SDK_DEFINED
struct SDK__Class;
struct SDK {
    struct SDK__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SDK_FWDDECL)
#define IL2CPP_STRUCT_SDK_FWDDECL
#include <Modloader/app/structs/SDK__Class.h>
#endif
#undef IL2CPP_STRUCT_SDK_INITIALIZING
#if !defined(IL2CPP_STRUCT_SDK_DEFINED) && !defined(IL2CPP_STRUCT_SDK_FWDDECL)
#include <Modloader/app/structs/SDK.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SDK.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
