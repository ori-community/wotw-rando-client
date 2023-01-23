#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeClassHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeClassHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeClassHandle_DEFINED)
#define IL2CPP_STRUCT_RuntimeClassHandle_DEFINED
struct RuntimeStructs_MonoClass;
struct RuntimeClassHandle {
    struct RuntimeStructs_MonoClass* value;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeClassHandle_FWDDECL)
#define IL2CPP_STRUCT_RuntimeClassHandle_FWDDECL
#include <Modloader/app/structs/RuntimeStructs_MonoClass.h>
#endif
#undef IL2CPP_STRUCT_RuntimeClassHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeClassHandle_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeClassHandle_FWDDECL)
#include <Modloader/app/structs/RuntimeClassHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeClassHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
