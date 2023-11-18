#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteActivationAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteActivationAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteActivationAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoteActivationAttribute__Fields_DEFINED
struct IList;
struct __declspec(align(8)) RemoteActivationAttribute__Fields {
    struct IList* _contextProperties;
};
#endif
#if !defined(IL2CPP_STRUCT_RemoteActivationAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_RemoteActivationAttribute__Fields_FWDDECL
#include <Modloader/app/structs/IList.h>
#endif
#undef IL2CPP_STRUCT_RemoteActivationAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteActivationAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RemoteActivationAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/RemoteActivationAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteActivationAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
