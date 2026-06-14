#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeClassAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeClassAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeClassAttribute_DEFINED)
#include <Modloader/app/structs/NativeClassAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_NativeClassAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_NativeClassAttribute_DEFINED
struct NativeClassAttribute__Class;
struct NativeClassAttribute {
    struct NativeClassAttribute__Class* klass;
    MonitorData* monitor;
    struct NativeClassAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NativeClassAttribute_FWDDECL)
#define IL2CPP_STRUCT_NativeClassAttribute_FWDDECL
#include <Modloader/app/structs/NativeClassAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeClassAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeClassAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NativeClassAttribute_FWDDECL)
#include <Modloader/app/structs/NativeClassAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeClassAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
