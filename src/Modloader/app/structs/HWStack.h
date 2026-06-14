#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HWStack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HWStack_INITIALIZING
#if !defined(IL2CPP_STRUCT_HWStack_DEFINED)
#include <Modloader/app/structs/HWStack__Fields.h>
#if defined(IL2CPP_STRUCT_HWStack__Fields_DEFINED)
#define IL2CPP_STRUCT_HWStack_DEFINED
struct HWStack__Class;
struct HWStack {
    struct HWStack__Class* klass;
    MonitorData* monitor;
    struct HWStack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HWStack_FWDDECL)
#define IL2CPP_STRUCT_HWStack_FWDDECL
#include <Modloader/app/structs/HWStack__Class.h>
#endif
#undef IL2CPP_STRUCT_HWStack_INITIALIZING
#if !defined(IL2CPP_STRUCT_HWStack_DEFINED) && !defined(IL2CPP_STRUCT_HWStack_FWDDECL)
#include <Modloader/app/structs/HWStack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HWStack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
