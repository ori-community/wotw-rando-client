#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CodePageDataItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CodePageDataItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodePageDataItem_DEFINED)
#include <Modloader/app/structs/CodePageDataItem__Fields.h>
#if defined(IL2CPP_STRUCT_CodePageDataItem__Fields_DEFINED)
#define IL2CPP_STRUCT_CodePageDataItem_DEFINED
struct CodePageDataItem__Class;
struct CodePageDataItem {
    struct CodePageDataItem__Class* klass;
    MonitorData* monitor;
    struct CodePageDataItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CodePageDataItem_FWDDECL)
#define IL2CPP_STRUCT_CodePageDataItem_FWDDECL
#include <Modloader/app/structs/CodePageDataItem__Class.h>
#endif
#undef IL2CPP_STRUCT_CodePageDataItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodePageDataItem_DEFINED) && !defined(IL2CPP_STRUCT_CodePageDataItem_FWDDECL)
#include <Modloader/app/structs/CodePageDataItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CodePageDataItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
