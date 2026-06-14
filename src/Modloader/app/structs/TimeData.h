#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeData_DEFINED)
#define IL2CPP_STRUCT_TimeData_DEFINED
struct TimeData {
    float elapsedTime;
    float deltaTime;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeData_FWDDECL)
#define IL2CPP_STRUCT_TimeData_FWDDECL
#endif
#undef IL2CPP_STRUCT_TimeData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeData_DEFINED) && !defined(IL2CPP_STRUCT_TimeData_FWDDECL)
#include <Modloader/app/structs/TimeData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
