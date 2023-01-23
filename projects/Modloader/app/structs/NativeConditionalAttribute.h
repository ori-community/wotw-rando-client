#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeConditionalAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeConditionalAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeConditionalAttribute_DEFINED)
#include <Modloader/app/structs/NativeConditionalAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_NativeConditionalAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_NativeConditionalAttribute_DEFINED
struct NativeConditionalAttribute__Class;
struct NativeConditionalAttribute {
    struct NativeConditionalAttribute__Class* klass;
    MonitorData* monitor;
    struct NativeConditionalAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NativeConditionalAttribute_FWDDECL)
#define IL2CPP_STRUCT_NativeConditionalAttribute_FWDDECL
#include <Modloader/app/structs/NativeConditionalAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeConditionalAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeConditionalAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NativeConditionalAttribute_FWDDECL)
#include <Modloader/app/structs/NativeConditionalAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeConditionalAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
