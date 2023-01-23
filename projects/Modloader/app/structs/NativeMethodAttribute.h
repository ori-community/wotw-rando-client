#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeMethodAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeMethodAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeMethodAttribute_DEFINED)
#include <Modloader/app/structs/NativeMethodAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_NativeMethodAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_NativeMethodAttribute_DEFINED
struct NativeMethodAttribute__Class;
struct NativeMethodAttribute {
    struct NativeMethodAttribute__Class* klass;
    MonitorData* monitor;
    struct NativeMethodAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NativeMethodAttribute_FWDDECL)
#define IL2CPP_STRUCT_NativeMethodAttribute_FWDDECL
#include <Modloader/app/structs/NativeMethodAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeMethodAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeMethodAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NativeMethodAttribute_FWDDECL)
#include <Modloader/app/structs/NativeMethodAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeMethodAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
