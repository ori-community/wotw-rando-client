#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidateNames_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidateNames_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidateNames_DEFINED)
#define IL2CPP_STRUCT_ValidateNames_DEFINED
struct ValidateNames__Class;
struct ValidateNames {
    struct ValidateNames__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ValidateNames_FWDDECL)
#define IL2CPP_STRUCT_ValidateNames_FWDDECL
#include <Modloader/app/structs/ValidateNames__Class.h>
#endif
#undef IL2CPP_STRUCT_ValidateNames_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidateNames_DEFINED) && !defined(IL2CPP_STRUCT_ValidateNames_FWDDECL)
#include <Modloader/app/structs/ValidateNames.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidateNames.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
