#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpaceAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpaceAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpaceAttribute_DEFINED)
#include <Modloader/app/structs/SpaceAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SpaceAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SpaceAttribute_DEFINED
struct SpaceAttribute__Class;
struct SpaceAttribute {
    struct SpaceAttribute__Class* klass;
    MonitorData* monitor;
    struct SpaceAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpaceAttribute_FWDDECL)
#define IL2CPP_STRUCT_SpaceAttribute_FWDDECL
#include <Modloader/app/structs/SpaceAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SpaceAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpaceAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SpaceAttribute_FWDDECL)
#include <Modloader/app/structs/SpaceAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpaceAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
