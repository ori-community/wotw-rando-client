#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoCustomAttrs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoCustomAttrs_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoCustomAttrs_DEFINED)
#define IL2CPP_STRUCT_MonoCustomAttrs_DEFINED
struct MonoCustomAttrs__Class;
struct MonoCustomAttrs {
    struct MonoCustomAttrs__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MonoCustomAttrs_FWDDECL)
#define IL2CPP_STRUCT_MonoCustomAttrs_FWDDECL
#include <Modloader/app/structs/MonoCustomAttrs__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoCustomAttrs_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoCustomAttrs_DEFINED) && !defined(IL2CPP_STRUCT_MonoCustomAttrs_FWDDECL)
#include <Modloader/app/structs/MonoCustomAttrs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoCustomAttrs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
