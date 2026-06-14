#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeTypeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeTypeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeTypeAttribute_DEFINED)
#include <Modloader/app/structs/NativeTypeAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_NativeTypeAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_NativeTypeAttribute_DEFINED
struct NativeTypeAttribute__Class;
struct NativeTypeAttribute {
    struct NativeTypeAttribute__Class* klass;
    MonitorData* monitor;
    struct NativeTypeAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NativeTypeAttribute_FWDDECL)
#define IL2CPP_STRUCT_NativeTypeAttribute_FWDDECL
#include <Modloader/app/structs/NativeTypeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeTypeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeTypeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NativeTypeAttribute_FWDDECL)
#include <Modloader/app/structs/NativeTypeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeTypeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
