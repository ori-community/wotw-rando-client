#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeMethodAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeMethodAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeMethodAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_NativeMethodAttribute__Fields_DEFINED
struct String;
struct __declspec(align(8)) NativeMethodAttribute__Fields {
    struct String* _Name_k__BackingField;
    bool _IsThreadSafe_k__BackingField;
    bool _IsFreeFunction_k__BackingField;
    bool _ThrowsException_k__BackingField;
    bool _HasExplicitThis_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_NativeMethodAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_NativeMethodAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NativeMethodAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeMethodAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NativeMethodAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/NativeMethodAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeMethodAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
