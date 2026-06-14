#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConceptScreen_ImageData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConceptScreen_ImageData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConceptScreen_ImageData_DEFINED)
#include <Modloader/app/structs/ConceptScreen_ImageData__Fields.h>
#if defined(IL2CPP_STRUCT_ConceptScreen_ImageData__Fields_DEFINED)
#define IL2CPP_STRUCT_ConceptScreen_ImageData_DEFINED
struct ConceptScreen_ImageData__Class;
struct ConceptScreen_ImageData {
    struct ConceptScreen_ImageData__Class* klass;
    MonitorData* monitor;
    struct ConceptScreen_ImageData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConceptScreen_ImageData_FWDDECL)
#define IL2CPP_STRUCT_ConceptScreen_ImageData_FWDDECL
#include <Modloader/app/structs/ConceptScreen_ImageData__Class.h>
#endif
#undef IL2CPP_STRUCT_ConceptScreen_ImageData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConceptScreen_ImageData_DEFINED) && !defined(IL2CPP_STRUCT_ConceptScreen_ImageData_FWDDECL)
#include <Modloader/app/structs/ConceptScreen_ImageData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConceptScreen_ImageData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
