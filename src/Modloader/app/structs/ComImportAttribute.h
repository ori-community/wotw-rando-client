#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComImportAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComImportAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComImportAttribute_DEFINED)
#define IL2CPP_STRUCT_ComImportAttribute_DEFINED
struct ComImportAttribute__Class;
struct ComImportAttribute {
    struct ComImportAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ComImportAttribute_FWDDECL)
#define IL2CPP_STRUCT_ComImportAttribute_FWDDECL
#include <Modloader/app/structs/ComImportAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ComImportAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComImportAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ComImportAttribute_FWDDECL)
#include <Modloader/app/structs/ComImportAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComImportAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
