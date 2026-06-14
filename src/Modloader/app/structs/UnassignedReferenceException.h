#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnassignedReferenceException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnassignedReferenceException_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnassignedReferenceException_DEFINED)
#include <Modloader/app/structs/UnassignedReferenceException__Fields.h>
#if defined(IL2CPP_STRUCT_UnassignedReferenceException__Fields_DEFINED)
#define IL2CPP_STRUCT_UnassignedReferenceException_DEFINED
struct UnassignedReferenceException__Class;
struct UnassignedReferenceException {
    struct UnassignedReferenceException__Class* klass;
    MonitorData* monitor;
    struct UnassignedReferenceException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnassignedReferenceException_FWDDECL)
#define IL2CPP_STRUCT_UnassignedReferenceException_FWDDECL
#include <Modloader/app/structs/UnassignedReferenceException__Class.h>
#endif
#undef IL2CPP_STRUCT_UnassignedReferenceException_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnassignedReferenceException_DEFINED) && !defined(IL2CPP_STRUCT_UnassignedReferenceException_FWDDECL)
#include <Modloader/app/structs/UnassignedReferenceException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnassignedReferenceException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
