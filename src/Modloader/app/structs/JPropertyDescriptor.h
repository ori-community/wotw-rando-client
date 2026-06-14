#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JPropertyDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JPropertyDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_JPropertyDescriptor_DEFINED)
#include <Modloader/app/structs/JPropertyDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_JPropertyDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_JPropertyDescriptor_DEFINED
struct JPropertyDescriptor__Class;
struct JPropertyDescriptor {
    struct JPropertyDescriptor__Class* klass;
    MonitorData* monitor;
    struct JPropertyDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JPropertyDescriptor_FWDDECL)
#define IL2CPP_STRUCT_JPropertyDescriptor_FWDDECL
#include <Modloader/app/structs/JPropertyDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_JPropertyDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_JPropertyDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_JPropertyDescriptor_FWDDECL)
#include <Modloader/app/structs/JPropertyDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JPropertyDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
