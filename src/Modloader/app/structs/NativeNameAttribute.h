#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeNameAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeNameAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeNameAttribute_DEFINED)
#include <Modloader/app/structs/NativeNameAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_NativeNameAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_NativeNameAttribute_DEFINED
struct NativeNameAttribute__Class;
struct NativeNameAttribute {
    struct NativeNameAttribute__Class* klass;
    MonitorData* monitor;
    struct NativeNameAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NativeNameAttribute_FWDDECL)
#define IL2CPP_STRUCT_NativeNameAttribute_FWDDECL
#include <Modloader/app/structs/NativeNameAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeNameAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeNameAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NativeNameAttribute_FWDDECL)
#include <Modloader/app/structs/NativeNameAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeNameAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
