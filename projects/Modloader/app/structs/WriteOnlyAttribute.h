#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteOnlyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteOnlyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteOnlyAttribute_DEFINED)
#define IL2CPP_STRUCT_WriteOnlyAttribute_DEFINED
struct WriteOnlyAttribute__Class;
struct WriteOnlyAttribute {
    struct WriteOnlyAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WriteOnlyAttribute_FWDDECL)
#define IL2CPP_STRUCT_WriteOnlyAttribute_FWDDECL
#include <Modloader/app/structs/WriteOnlyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_WriteOnlyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteOnlyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_WriteOnlyAttribute_FWDDECL)
#include <Modloader/app/structs/WriteOnlyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteOnlyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
