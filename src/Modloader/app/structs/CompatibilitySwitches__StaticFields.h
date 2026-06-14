#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompatibilitySwitches__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompatibilitySwitches__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompatibilitySwitches__StaticFields_DEFINED)
#define IL2CPP_STRUCT_CompatibilitySwitches__StaticFields_DEFINED
struct CompatibilitySwitches__StaticFields {
    bool IsAppEarlierThanSilverlight4;
    bool IsAppEarlierThanWindowsPhone8;
};
#endif
#if !defined(IL2CPP_STRUCT_CompatibilitySwitches__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CompatibilitySwitches__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CompatibilitySwitches__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompatibilitySwitches__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CompatibilitySwitches__StaticFields_FWDDECL)
#include <Modloader/app/structs/CompatibilitySwitches__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompatibilitySwitches__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
