#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeGuidMapping_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeGuidMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGuidMapping_DEFINED)
#include <Modloader/app/structs/RuntimeGuidMapping__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeGuidMapping__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeGuidMapping_DEFINED
struct RuntimeGuidMapping__Class;
struct RuntimeGuidMapping {
    struct RuntimeGuidMapping__Class* klass;
    MonitorData* monitor;
    struct RuntimeGuidMapping__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeGuidMapping_FWDDECL)
#define IL2CPP_STRUCT_RuntimeGuidMapping_FWDDECL
#include <Modloader/app/structs/RuntimeGuidMapping__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeGuidMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGuidMapping_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeGuidMapping_FWDDECL)
#include <Modloader/app/structs/RuntimeGuidMapping.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeGuidMapping.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
