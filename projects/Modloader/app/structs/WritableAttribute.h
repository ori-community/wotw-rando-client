#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WritableAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WritableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_WritableAttribute_DEFINED)
#define IL2CPP_STRUCT_WritableAttribute_DEFINED
struct WritableAttribute__Class;
struct WritableAttribute {
    struct WritableAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WritableAttribute_FWDDECL)
#define IL2CPP_STRUCT_WritableAttribute_FWDDECL
#include <Modloader/app/structs/WritableAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_WritableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_WritableAttribute_DEFINED) && !defined(IL2CPP_STRUCT_WritableAttribute_FWDDECL)
#include <Modloader/app/structs/WritableAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WritableAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
