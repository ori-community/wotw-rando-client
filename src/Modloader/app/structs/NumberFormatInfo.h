#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NumberFormatInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NumberFormatInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberFormatInfo_DEFINED)
#include <Modloader/app/structs/NumberFormatInfo__Fields.h>
#if defined(IL2CPP_STRUCT_NumberFormatInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_NumberFormatInfo_DEFINED
struct NumberFormatInfo__Class;
struct NumberFormatInfo {
    struct NumberFormatInfo__Class* klass;
    MonitorData* monitor;
    struct NumberFormatInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NumberFormatInfo_FWDDECL)
#define IL2CPP_STRUCT_NumberFormatInfo_FWDDECL
#include <Modloader/app/structs/NumberFormatInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_NumberFormatInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberFormatInfo_DEFINED) && !defined(IL2CPP_STRUCT_NumberFormatInfo_FWDDECL)
#include <Modloader/app/structs/NumberFormatInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NumberFormatInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
