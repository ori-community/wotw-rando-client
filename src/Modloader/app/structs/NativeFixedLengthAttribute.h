#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeFixedLengthAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeFixedLengthAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeFixedLengthAttribute_DEFINED)
#define IL2CPP_STRUCT_NativeFixedLengthAttribute_DEFINED
struct NativeFixedLengthAttribute__Class;
struct NativeFixedLengthAttribute {
    struct NativeFixedLengthAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NativeFixedLengthAttribute_FWDDECL)
#define IL2CPP_STRUCT_NativeFixedLengthAttribute_FWDDECL
#include <Modloader/app/structs/NativeFixedLengthAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeFixedLengthAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeFixedLengthAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NativeFixedLengthAttribute_FWDDECL)
#include <Modloader/app/structs/NativeFixedLengthAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeFixedLengthAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
