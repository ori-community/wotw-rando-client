#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StackBuilderSink__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StackBuilderSink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackBuilderSink__Fields_DEFINED)
#define IL2CPP_STRUCT_StackBuilderSink__Fields_DEFINED
struct MarshalByRefObject;
struct RealProxy;
struct __declspec(align(8)) StackBuilderSink__Fields {
    struct MarshalByRefObject* _target;
    struct RealProxy* _rp;
};
#endif
#if !defined(IL2CPP_STRUCT_StackBuilderSink__Fields_FWDDECL)
#define IL2CPP_STRUCT_StackBuilderSink__Fields_FWDDECL
#include <Modloader/app/structs/MarshalByRefObject.h>
#include <Modloader/app/structs/RealProxy.h>
#endif
#undef IL2CPP_STRUCT_StackBuilderSink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackBuilderSink__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StackBuilderSink__Fields_FWDDECL)
#include <Modloader/app/structs/StackBuilderSink__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StackBuilderSink__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
