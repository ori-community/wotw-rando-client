#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKLimbTargeted_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKLimbTargeted_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKLimbTargeted_DEFINED)
#include <Modloader/app/structs/IKLimbTargeted__Fields.h>
#if defined(IL2CPP_STRUCT_IKLimbTargeted__Fields_DEFINED)
#define IL2CPP_STRUCT_IKLimbTargeted_DEFINED
struct IKLimbTargeted__Class;
struct IKLimbTargeted {
    struct IKLimbTargeted__Class* klass;
    MonitorData* monitor;
    struct IKLimbTargeted__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKLimbTargeted_FWDDECL)
#define IL2CPP_STRUCT_IKLimbTargeted_FWDDECL
#include <Modloader/app/structs/IKLimbTargeted__Class.h>
#endif
#undef IL2CPP_STRUCT_IKLimbTargeted_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKLimbTargeted_DEFINED) && !defined(IL2CPP_STRUCT_IKLimbTargeted_FWDDECL)
#include <Modloader/app/structs/IKLimbTargeted.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKLimbTargeted.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
