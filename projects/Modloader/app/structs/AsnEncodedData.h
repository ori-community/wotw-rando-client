#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsnEncodedData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsnEncodedData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsnEncodedData_DEFINED)
#include <Modloader/app/structs/AsnEncodedData__Fields.h>
#if defined(IL2CPP_STRUCT_AsnEncodedData__Fields_DEFINED)
#define IL2CPP_STRUCT_AsnEncodedData_DEFINED
struct AsnEncodedData__Class;
struct AsnEncodedData {
    struct AsnEncodedData__Class* klass;
    MonitorData* monitor;
    struct AsnEncodedData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsnEncodedData_FWDDECL)
#define IL2CPP_STRUCT_AsnEncodedData_FWDDECL
#include <Modloader/app/structs/AsnEncodedData__Class.h>
#endif
#undef IL2CPP_STRUCT_AsnEncodedData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsnEncodedData_DEFINED) && !defined(IL2CPP_STRUCT_AsnEncodedData_FWDDECL)
#include <Modloader/app/structs/AsnEncodedData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsnEncodedData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
