#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativePropertyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativePropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativePropertyAttribute_DEFINED)
#include <Modloader/app/structs/NativePropertyAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_NativePropertyAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_NativePropertyAttribute_DEFINED
struct NativePropertyAttribute__Class;
struct NativePropertyAttribute {
    struct NativePropertyAttribute__Class* klass;
    MonitorData* monitor;
    struct NativePropertyAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NativePropertyAttribute_FWDDECL)
#define IL2CPP_STRUCT_NativePropertyAttribute_FWDDECL
#include <Modloader/app/structs/NativePropertyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NativePropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativePropertyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NativePropertyAttribute_FWDDECL)
#include <Modloader/app/structs/NativePropertyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativePropertyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
