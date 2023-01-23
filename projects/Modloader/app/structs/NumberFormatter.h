#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NumberFormatter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NumberFormatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberFormatter_DEFINED)
#include <Modloader/app/structs/NumberFormatter__Fields.h>
#if defined(IL2CPP_STRUCT_NumberFormatter__Fields_DEFINED)
#define IL2CPP_STRUCT_NumberFormatter_DEFINED
struct NumberFormatter__Class;
struct NumberFormatter {
    struct NumberFormatter__Class* klass;
    MonitorData* monitor;
    struct NumberFormatter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NumberFormatter_FWDDECL)
#define IL2CPP_STRUCT_NumberFormatter_FWDDECL
#include <Modloader/app/structs/NumberFormatter__Class.h>
#endif
#undef IL2CPP_STRUCT_NumberFormatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberFormatter_DEFINED) && !defined(IL2CPP_STRUCT_NumberFormatter_FWDDECL)
#include <Modloader/app/structs/NumberFormatter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NumberFormatter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
