#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointerEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointerEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerEventData_DEFINED)
#include <Modloader/app/structs/PointerEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PointerEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PointerEventData_DEFINED
struct PointerEventData__Class;
struct PointerEventData {
    struct PointerEventData__Class* klass;
    MonitorData* monitor;
    struct PointerEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointerEventData_FWDDECL)
#define IL2CPP_STRUCT_PointerEventData_FWDDECL
#include <Modloader/app/structs/PointerEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PointerEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerEventData_DEFINED) && !defined(IL2CPP_STRUCT_PointerEventData_FWDDECL)
#include <Modloader/app/structs/PointerEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointerEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
