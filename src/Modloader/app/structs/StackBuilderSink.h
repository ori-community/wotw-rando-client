#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StackBuilderSink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StackBuilderSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackBuilderSink_DEFINED)
#include <Modloader/app/structs/StackBuilderSink__Fields.h>
#if defined(IL2CPP_STRUCT_StackBuilderSink__Fields_DEFINED)
#define IL2CPP_STRUCT_StackBuilderSink_DEFINED
struct StackBuilderSink__Class;
struct StackBuilderSink {
    struct StackBuilderSink__Class* klass;
    MonitorData* monitor;
    struct StackBuilderSink__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StackBuilderSink_FWDDECL)
#define IL2CPP_STRUCT_StackBuilderSink_FWDDECL
#include <Modloader/app/structs/StackBuilderSink__Class.h>
#endif
#undef IL2CPP_STRUCT_StackBuilderSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackBuilderSink_DEFINED) && !defined(IL2CPP_STRUCT_StackBuilderSink_FWDDECL)
#include <Modloader/app/structs/StackBuilderSink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StackBuilderSink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
