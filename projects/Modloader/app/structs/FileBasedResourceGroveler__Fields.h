#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileBasedResourceGroveler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileBasedResourceGroveler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileBasedResourceGroveler__Fields_DEFINED)
#define IL2CPP_STRUCT_FileBasedResourceGroveler__Fields_DEFINED
struct ResourceManager_ResourceManagerMediator;
struct __declspec(align(8)) FileBasedResourceGroveler__Fields {
    struct ResourceManager_ResourceManagerMediator* _mediator;
};
#endif
#if !defined(IL2CPP_STRUCT_FileBasedResourceGroveler__Fields_FWDDECL)
#define IL2CPP_STRUCT_FileBasedResourceGroveler__Fields_FWDDECL
#include <Modloader/app/structs/ResourceManager_ResourceManagerMediator.h>
#endif
#undef IL2CPP_STRUCT_FileBasedResourceGroveler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileBasedResourceGroveler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FileBasedResourceGroveler__Fields_FWDDECL)
#include <Modloader/app/structs/FileBasedResourceGroveler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileBasedResourceGroveler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
