#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XCData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XCData_INITIALIZING
#if !defined(IL2CPP_STRUCT_XCData_DEFINED)
#include <Modloader/app/structs/XCData__Fields.h>
#if defined(IL2CPP_STRUCT_XCData__Fields_DEFINED)
#define IL2CPP_STRUCT_XCData_DEFINED
struct XCData__Class;
struct XCData {
    struct XCData__Class* klass;
    MonitorData* monitor;
    struct XCData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XCData_FWDDECL)
#define IL2CPP_STRUCT_XCData_FWDDECL
#include <Modloader/app/structs/XCData__Class.h>
#endif
#undef IL2CPP_STRUCT_XCData_INITIALIZING
#if !defined(IL2CPP_STRUCT_XCData_DEFINED) && !defined(IL2CPP_STRUCT_XCData_FWDDECL)
#include <Modloader/app/structs/XCData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XCData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
