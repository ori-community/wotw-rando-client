#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RangeAnimationEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RangeAnimationEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeAnimationEntry_DEFINED)
#include <Modloader/app/structs/RangeAnimationEntry__Fields.h>
#if defined(IL2CPP_STRUCT_RangeAnimationEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_RangeAnimationEntry_DEFINED
struct RangeAnimationEntry__Class;
struct RangeAnimationEntry {
    struct RangeAnimationEntry__Class* klass;
    MonitorData* monitor;
    struct RangeAnimationEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RangeAnimationEntry_FWDDECL)
#define IL2CPP_STRUCT_RangeAnimationEntry_FWDDECL
#include <Modloader/app/structs/RangeAnimationEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_RangeAnimationEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeAnimationEntry_DEFINED) && !defined(IL2CPP_STRUCT_RangeAnimationEntry_FWDDECL)
#include <Modloader/app/structs/RangeAnimationEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RangeAnimationEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
