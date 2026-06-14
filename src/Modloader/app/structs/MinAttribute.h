#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinAttribute_DEFINED)
#include <Modloader/app/structs/MinAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_MinAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_MinAttribute_DEFINED
struct MinAttribute__Class;
struct MinAttribute {
    struct MinAttribute__Class* klass;
    MonitorData* monitor;
    struct MinAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinAttribute_FWDDECL)
#define IL2CPP_STRUCT_MinAttribute_FWDDECL
#include <Modloader/app/structs/MinAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_MinAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinAttribute_DEFINED) && !defined(IL2CPP_STRUCT_MinAttribute_FWDDECL)
#include <Modloader/app/structs/MinAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
