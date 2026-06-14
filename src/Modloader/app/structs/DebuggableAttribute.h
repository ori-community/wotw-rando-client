#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebuggableAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebuggableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebuggableAttribute_DEFINED)
#include <Modloader/app/structs/DebuggableAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DebuggableAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DebuggableAttribute_DEFINED
struct DebuggableAttribute__Class;
struct DebuggableAttribute {
    struct DebuggableAttribute__Class* klass;
    MonitorData* monitor;
    struct DebuggableAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebuggableAttribute_FWDDECL)
#define IL2CPP_STRUCT_DebuggableAttribute_FWDDECL
#include <Modloader/app/structs/DebuggableAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DebuggableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebuggableAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DebuggableAttribute_FWDDECL)
#include <Modloader/app/structs/DebuggableAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebuggableAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
