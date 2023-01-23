#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FormerlySerializedAsAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FormerlySerializedAsAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormerlySerializedAsAttribute_DEFINED)
#include <Modloader/app/structs/FormerlySerializedAsAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_FormerlySerializedAsAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_FormerlySerializedAsAttribute_DEFINED
struct FormerlySerializedAsAttribute__Class;
struct FormerlySerializedAsAttribute {
    struct FormerlySerializedAsAttribute__Class* klass;
    MonitorData* monitor;
    struct FormerlySerializedAsAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FormerlySerializedAsAttribute_FWDDECL)
#define IL2CPP_STRUCT_FormerlySerializedAsAttribute_FWDDECL
#include <Modloader/app/structs/FormerlySerializedAsAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_FormerlySerializedAsAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormerlySerializedAsAttribute_DEFINED) && !defined(IL2CPP_STRUCT_FormerlySerializedAsAttribute_FWDDECL)
#include <Modloader/app/structs/FormerlySerializedAsAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FormerlySerializedAsAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
