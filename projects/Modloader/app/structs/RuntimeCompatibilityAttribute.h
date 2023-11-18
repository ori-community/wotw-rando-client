#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeCompatibilityAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeCompatibilityAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeCompatibilityAttribute_DEFINED)
#include <Modloader/app/structs/RuntimeCompatibilityAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeCompatibilityAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeCompatibilityAttribute_DEFINED
struct RuntimeCompatibilityAttribute__Class;
struct RuntimeCompatibilityAttribute {
    struct RuntimeCompatibilityAttribute__Class* klass;
    MonitorData* monitor;
    struct RuntimeCompatibilityAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeCompatibilityAttribute_FWDDECL)
#define IL2CPP_STRUCT_RuntimeCompatibilityAttribute_FWDDECL
#include <Modloader/app/structs/RuntimeCompatibilityAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeCompatibilityAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeCompatibilityAttribute_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeCompatibilityAttribute_FWDDECL)
#include <Modloader/app/structs/RuntimeCompatibilityAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeCompatibilityAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
