#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoProperty__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoProperty__Fields_DEFINED)
#include <Modloader/app/structs/MonoPropertyInfo.h>
#include <Modloader/app/structs/PInfo__Enum.h>
#if defined(IL2CPP_STRUCT_MonoPropertyInfo_DEFINED) && defined(IL2CPP_STRUCT_PInfo__Enum_DEFINED)
#define IL2CPP_STRUCT_MonoProperty__Fields_DEFINED
struct MonoProperty_GetterAdapter;
struct __declspec(align(8)) MonoProperty__Fields {
    void* klass;
    void* prop;
    struct MonoPropertyInfo info;
    PInfo__Enum cached;

    struct MonoProperty_GetterAdapter* cached_getter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoProperty__Fields_FWDDECL)
#define IL2CPP_STRUCT_MonoProperty__Fields_FWDDECL
#include <Modloader/app/structs/MonoProperty_GetterAdapter.h>
#endif
#undef IL2CPP_STRUCT_MonoProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoProperty__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MonoProperty__Fields_FWDDECL)
#include <Modloader/app/structs/MonoProperty__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoProperty__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
