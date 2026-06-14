#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Claim_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Claim_INITIALIZING
#if !defined(IL2CPP_STRUCT_Claim_DEFINED)
#include <Modloader/app/structs/Claim__Fields.h>
#if defined(IL2CPP_STRUCT_Claim__Fields_DEFINED)
#define IL2CPP_STRUCT_Claim_DEFINED
struct Claim__Class;
struct Claim {
    struct Claim__Class* klass;
    MonitorData* monitor;
    struct Claim__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Claim_FWDDECL)
#define IL2CPP_STRUCT_Claim_FWDDECL
#include <Modloader/app/structs/Claim__Class.h>
#endif
#undef IL2CPP_STRUCT_Claim_INITIALIZING
#if !defined(IL2CPP_STRUCT_Claim_DEFINED) && !defined(IL2CPP_STRUCT_Claim_FWDDECL)
#include <Modloader/app/structs/Claim.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Claim.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
