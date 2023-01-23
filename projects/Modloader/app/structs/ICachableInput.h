#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICachableInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICachableInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICachableInput_DEFINED)
#define IL2CPP_STRUCT_ICachableInput_DEFINED
struct ICachableInput__Class;
struct ICachableInput {
    struct ICachableInput__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICachableInput_FWDDECL)
#define IL2CPP_STRUCT_ICachableInput_FWDDECL
#include <Modloader/app/structs/ICachableInput__Class.h>
#endif
#undef IL2CPP_STRUCT_ICachableInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICachableInput_DEFINED) && !defined(IL2CPP_STRUCT_ICachableInput_FWDDECL)
#include <Modloader/app/structs/ICachableInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICachableInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
