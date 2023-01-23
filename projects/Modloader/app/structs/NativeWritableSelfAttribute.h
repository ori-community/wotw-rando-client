#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeWritableSelfAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeWritableSelfAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeWritableSelfAttribute_DEFINED)
#include <Modloader/app/structs/NativeWritableSelfAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_NativeWritableSelfAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_NativeWritableSelfAttribute_DEFINED
struct NativeWritableSelfAttribute__Class;
struct NativeWritableSelfAttribute {
    struct NativeWritableSelfAttribute__Class* klass;
    MonitorData* monitor;
    struct NativeWritableSelfAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NativeWritableSelfAttribute_FWDDECL)
#define IL2CPP_STRUCT_NativeWritableSelfAttribute_FWDDECL
#include <Modloader/app/structs/NativeWritableSelfAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeWritableSelfAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeWritableSelfAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NativeWritableSelfAttribute_FWDDECL)
#include <Modloader/app/structs/NativeWritableSelfAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeWritableSelfAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
