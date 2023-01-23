#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FormatterData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FormatterData_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatterData_DEFINED)
#include <Modloader/app/structs/FormatterData__Fields.h>
#if defined(IL2CPP_STRUCT_FormatterData__Fields_DEFINED)
#define IL2CPP_STRUCT_FormatterData_DEFINED
struct FormatterData__Class;
struct FormatterData {
    struct FormatterData__Class* klass;
    MonitorData* monitor;
    struct FormatterData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FormatterData_FWDDECL)
#define IL2CPP_STRUCT_FormatterData_FWDDECL
#include <Modloader/app/structs/FormatterData__Class.h>
#endif
#undef IL2CPP_STRUCT_FormatterData_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatterData_DEFINED) && !defined(IL2CPP_STRUCT_FormatterData_FWDDECL)
#include <Modloader/app/structs/FormatterData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FormatterData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
