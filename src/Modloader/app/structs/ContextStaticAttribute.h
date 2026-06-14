#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContextStaticAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContextStaticAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContextStaticAttribute_DEFINED)
#define IL2CPP_STRUCT_ContextStaticAttribute_DEFINED
struct ContextStaticAttribute__Class;
struct ContextStaticAttribute {
    struct ContextStaticAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ContextStaticAttribute_FWDDECL)
#define IL2CPP_STRUCT_ContextStaticAttribute_FWDDECL
#include <Modloader/app/structs/ContextStaticAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ContextStaticAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContextStaticAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ContextStaticAttribute_FWDDECL)
#include <Modloader/app/structs/ContextStaticAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContextStaticAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
