#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Sdk__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Sdk__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sdk__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Sdk__StaticFields_DEFINED
struct Sdk__StaticFields {
};
#endif
#if !defined(IL2CPP_STRUCT_Sdk__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Sdk__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Sdk__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sdk__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Sdk__StaticFields_FWDDECL)
#include <Modloader/app/structs/Sdk__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Sdk__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SDK__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SDK__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SDK__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SDK__StaticFields_DEFINED
struct XTaskQueue;
struct SDK__StaticFields {
    struct XTaskQueue* defaultQueue;
    bool isInitialized;
};
#endif
#if !defined(IL2CPP_STRUCT_SDK__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SDK__StaticFields_FWDDECL
#include <Modloader/app/structs/XTaskQueue.h>
#endif
#undef IL2CPP_STRUCT_SDK__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SDK__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SDK__StaticFields_FWDDECL)
#include <Modloader/app/structs/SDK__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SDK__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
