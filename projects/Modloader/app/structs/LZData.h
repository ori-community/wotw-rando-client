#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LZData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LZData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LZData_DEFINED)
#define IL2CPP_STRUCT_LZData_DEFINED
struct LZData {
};
#endif
#if !defined(IL2CPP_STRUCT_LZData_FWDDECL)
#define IL2CPP_STRUCT_LZData_FWDDECL
#endif
#undef IL2CPP_STRUCT_LZData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LZData_DEFINED) && !defined(IL2CPP_STRUCT_LZData_FWDDECL)
#include <Modloader/app/structs/LZData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LZData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
