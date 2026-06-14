#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EZData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EZData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EZData_DEFINED)
#define IL2CPP_STRUCT_EZData_DEFINED
struct EZData {
};
#endif
#if !defined(IL2CPP_STRUCT_EZData_FWDDECL)
#define IL2CPP_STRUCT_EZData_FWDDECL
#endif
#undef IL2CPP_STRUCT_EZData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EZData_DEFINED) && !defined(IL2CPP_STRUCT_EZData_FWDDECL)
#include <Modloader/app/structs/EZData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EZData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
