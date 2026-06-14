#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyTrademarkAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyTrademarkAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyTrademarkAttribute_DEFINED)
#include <Modloader/app/structs/AssemblyTrademarkAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_AssemblyTrademarkAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_AssemblyTrademarkAttribute_DEFINED
struct AssemblyTrademarkAttribute__Class;
struct AssemblyTrademarkAttribute {
    struct AssemblyTrademarkAttribute__Class* klass;
    MonitorData* monitor;
    struct AssemblyTrademarkAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssemblyTrademarkAttribute_FWDDECL)
#define IL2CPP_STRUCT_AssemblyTrademarkAttribute_FWDDECL
#include <Modloader/app/structs/AssemblyTrademarkAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AssemblyTrademarkAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyTrademarkAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyTrademarkAttribute_FWDDECL)
#include <Modloader/app/structs/AssemblyTrademarkAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyTrademarkAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
