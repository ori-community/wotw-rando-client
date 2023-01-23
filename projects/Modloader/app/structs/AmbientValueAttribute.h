#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmbientValueAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmbientValueAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbientValueAttribute_DEFINED)
#include <Modloader/app/structs/AmbientValueAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_AmbientValueAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_AmbientValueAttribute_DEFINED
struct AmbientValueAttribute__Class;
struct AmbientValueAttribute {
    struct AmbientValueAttribute__Class* klass;
    MonitorData* monitor;
    struct AmbientValueAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmbientValueAttribute_FWDDECL)
#define IL2CPP_STRUCT_AmbientValueAttribute_FWDDECL
#include <Modloader/app/structs/AmbientValueAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AmbientValueAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbientValueAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AmbientValueAttribute_FWDDECL)
#include <Modloader/app/structs/AmbientValueAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmbientValueAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
