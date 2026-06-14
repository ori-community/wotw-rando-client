#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LateStartHook__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LateStartHook__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LateStartHook__StaticFields_DEFINED)
#define IL2CPP_STRUCT_LateStartHook__StaticFields_DEFINED
struct List_1_System_ValueTuple_2_;
struct LateStartHook__StaticFields {
    struct List_1_System_ValueTuple_2_* Actions;
};
#endif
#if !defined(IL2CPP_STRUCT_LateStartHook__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_LateStartHook__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_System_ValueTuple_2_.h>
#endif
#undef IL2CPP_STRUCT_LateStartHook__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LateStartHook__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_LateStartHook__StaticFields_FWDDECL)
#include <Modloader/app/structs/LateStartHook__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LateStartHook__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
