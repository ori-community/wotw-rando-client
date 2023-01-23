#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DllImportAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DllImportAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DllImportAttribute_DEFINED)
#include <Modloader/app/structs/DllImportAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DllImportAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DllImportAttribute_DEFINED
struct DllImportAttribute__Class;
struct DllImportAttribute {
    struct DllImportAttribute__Class* klass;
    MonitorData* monitor;
    struct DllImportAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DllImportAttribute_FWDDECL)
#define IL2CPP_STRUCT_DllImportAttribute_FWDDECL
#include <Modloader/app/structs/DllImportAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DllImportAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DllImportAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DllImportAttribute_FWDDECL)
#include <Modloader/app/structs/DllImportAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DllImportAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
