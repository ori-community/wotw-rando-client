#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayValidator_ValidReason_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayValidator_ValidReason_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayValidator_ValidReason_DEFINED)
#define IL2CPP_STRUCT_ReplayValidator_ValidReason_DEFINED
struct String;
struct ReplayValidator_ValidReason {
    bool IsValid;
    struct String* Reason;
    float Value;
};
#endif
#if !defined(IL2CPP_STRUCT_ReplayValidator_ValidReason_FWDDECL)
#define IL2CPP_STRUCT_ReplayValidator_ValidReason_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ReplayValidator_ValidReason_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayValidator_ValidReason_DEFINED) && !defined(IL2CPP_STRUCT_ReplayValidator_ValidReason_FWDDECL)
#include <Modloader/app/structs/ReplayValidator_ValidReason.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayValidator_ValidReason.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
