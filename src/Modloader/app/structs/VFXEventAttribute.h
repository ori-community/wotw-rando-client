#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VFXEventAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VFXEventAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_VFXEventAttribute_DEFINED)
#include <Modloader/app/structs/VFXEventAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_VFXEventAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_VFXEventAttribute_DEFINED
struct VFXEventAttribute__Class;
struct VFXEventAttribute {
    struct VFXEventAttribute__Class* klass;
    MonitorData* monitor;
    struct VFXEventAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VFXEventAttribute_FWDDECL)
#define IL2CPP_STRUCT_VFXEventAttribute_FWDDECL
#include <Modloader/app/structs/VFXEventAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_VFXEventAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_VFXEventAttribute_DEFINED) && !defined(IL2CPP_STRUCT_VFXEventAttribute_FWDDECL)
#include <Modloader/app/structs/VFXEventAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VFXEventAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
