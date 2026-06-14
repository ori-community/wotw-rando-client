#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeHeaderAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeHeaderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeHeaderAttribute_DEFINED)
#include <Modloader/app/structs/NativeHeaderAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_NativeHeaderAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_NativeHeaderAttribute_DEFINED
struct NativeHeaderAttribute__Class;
struct NativeHeaderAttribute {
    struct NativeHeaderAttribute__Class* klass;
    MonitorData* monitor;
    struct NativeHeaderAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NativeHeaderAttribute_FWDDECL)
#define IL2CPP_STRUCT_NativeHeaderAttribute_FWDDECL
#include <Modloader/app/structs/NativeHeaderAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeHeaderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeHeaderAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NativeHeaderAttribute_FWDDECL)
#include <Modloader/app/structs/NativeHeaderAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeHeaderAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
