#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumpGrid_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumpGrid_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpGrid_DEFINED)
#define IL2CPP_STRUCT_JumpGrid_DEFINED
struct JumpGrid__Class;
struct JumpGrid {
    struct JumpGrid__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_JumpGrid_FWDDECL)
#define IL2CPP_STRUCT_JumpGrid_FWDDECL
#include <Modloader/app/structs/JumpGrid__Class.h>
#endif
#undef IL2CPP_STRUCT_JumpGrid_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpGrid_DEFINED) && !defined(IL2CPP_STRUCT_JumpGrid_FWDDECL)
#include <Modloader/app/structs/JumpGrid.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumpGrid.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
