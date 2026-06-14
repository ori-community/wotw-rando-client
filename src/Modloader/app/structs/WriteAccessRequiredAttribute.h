#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteAccessRequiredAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteAccessRequiredAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteAccessRequiredAttribute_DEFINED)
#define IL2CPP_STRUCT_WriteAccessRequiredAttribute_DEFINED
struct WriteAccessRequiredAttribute__Class;
struct WriteAccessRequiredAttribute {
    struct WriteAccessRequiredAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WriteAccessRequiredAttribute_FWDDECL)
#define IL2CPP_STRUCT_WriteAccessRequiredAttribute_FWDDECL
#include <Modloader/app/structs/WriteAccessRequiredAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_WriteAccessRequiredAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteAccessRequiredAttribute_DEFINED) && !defined(IL2CPP_STRUCT_WriteAccessRequiredAttribute_FWDDECL)
#include <Modloader/app/structs/WriteAccessRequiredAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteAccessRequiredAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
