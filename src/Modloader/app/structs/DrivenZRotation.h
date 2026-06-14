#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrivenZRotation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrivenZRotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivenZRotation_DEFINED)
#include <Modloader/app/structs/DrivenZRotation__Fields.h>
#if defined(IL2CPP_STRUCT_DrivenZRotation__Fields_DEFINED)
#define IL2CPP_STRUCT_DrivenZRotation_DEFINED
struct DrivenZRotation__Class;
struct DrivenZRotation {
    struct DrivenZRotation__Class* klass;
    MonitorData* monitor;
    struct DrivenZRotation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DrivenZRotation_FWDDECL)
#define IL2CPP_STRUCT_DrivenZRotation_FWDDECL
#include <Modloader/app/structs/DrivenZRotation__Class.h>
#endif
#undef IL2CPP_STRUCT_DrivenZRotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivenZRotation_DEFINED) && !defined(IL2CPP_STRUCT_DrivenZRotation_FWDDECL)
#include <Modloader/app/structs/DrivenZRotation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrivenZRotation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
