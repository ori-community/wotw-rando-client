#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativePropertyAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativePropertyAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativePropertyAttribute__Fields_DEFINED)
#include <Modloader/app/structs/NativeMethodAttribute__Fields.h>
#include <Modloader/app/structs/TargetType__Enum.h>
#if defined(IL2CPP_STRUCT_NativeMethodAttribute__Fields_DEFINED) && defined(IL2CPP_STRUCT_TargetType__Enum_DEFINED)
#define IL2CPP_STRUCT_NativePropertyAttribute__Fields_DEFINED
struct NativePropertyAttribute__Fields {
    struct NativeMethodAttribute__Fields _;
    TargetType__Enum _TargetType_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NativePropertyAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_NativePropertyAttribute__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_NativePropertyAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativePropertyAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NativePropertyAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/NativePropertyAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativePropertyAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
