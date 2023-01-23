#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FontData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FontData_INITIALIZING
#if !defined(IL2CPP_STRUCT_FontData_DEFINED)
#include <Modloader/app/structs/FontData__Fields.h>
#if defined(IL2CPP_STRUCT_FontData__Fields_DEFINED)
#define IL2CPP_STRUCT_FontData_DEFINED
struct FontData__Class;
struct FontData {
    struct FontData__Class* klass;
    MonitorData* monitor;
    struct FontData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FontData_FWDDECL)
#define IL2CPP_STRUCT_FontData_FWDDECL
#include <Modloader/app/structs/FontData__Class.h>
#endif
#undef IL2CPP_STRUCT_FontData_INITIALIZING
#if !defined(IL2CPP_STRUCT_FontData_DEFINED) && !defined(IL2CPP_STRUCT_FontData_FWDDECL)
#include <Modloader/app/structs/FontData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FontData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
